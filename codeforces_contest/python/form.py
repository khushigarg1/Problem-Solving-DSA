import os
import time
import random
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

girls_names = [
    "kanan",
    "adritanya",
    "suhani",
    "hrishti",
    "aditi",
    "kanak",
    "baijul",
    "ayushi",
    "nandani",
    "simran",
    "purti",
    "kashish",
    "khwaish",
    "soumya",
    "anubhuti",
    "tanishka",
    "ananya",
    "rashi",
    "mahak",
    "rakhsha",
    "sukriti",
    "driti",
    "juhi",
]

question_options = {
    0: 3,
    1: 4,
    2: 3,
    3: 4,
    4: 3,
    5: 3,
    6: 3,
    7: 4,
    8: 3,
    9: 3,
    10: 3,
    11: 3,
    12: 3,
    13: 3,
    14: 3,
    15: 3,
    16: 3,
    17: 4,
    18: 3,
    19: 3,
    20: 3,
    21: 3,
    22: 3,
    23: 3,
    24: 3,
    25: 3,
    26: 3,
    27: 3,
    28: 3,
    29: 3,
    30: 3,
    31: 3,
    32: 4,
    33: 3,
    34: 4,
    35: 3,
    36: 3,
    37: 3,
    38: 4,
    39: 4,
    40: 4,
}


def select_random(x: int) -> int:
    return random.randint(0, x - 1) if x > 0 else 0


def setup_driver():
    options = webdriver.ChromeOptions()
    options.add_argument("--start-maximized")
    options.add_argument("--disable-blink-features=AutomationControlled")
    options.add_experimental_option("excludeSwitches", ["enable-automation"])
    options.add_experimental_option("useAutomationExtension", False)
    driver = webdriver.Chrome(options=options)
    return driver


def highlight_element(driver, element):
    original_style = element.get_attribute("style")
    driver.execute_script(
        "arguments[0].setAttribute('style', arguments[0].getAttribute('style') + ' background: yellow; border: 2px solid red;');",
        element,
    )
    # time.sleep(0.5)
    driver.execute_script(
        "arguments[0].setAttribute('style', arguments[0].getAttribute('style') + ' "
        + original_style
        + "');",
        element,
    )


def open_google_form(driver, form_url):
    driver.get(form_url)
    # time.sleep(2)


def select_multiple_choice_option(driver, question_index, option_index):
    multiple_choice_questions = driver.find_elements(
        By.XPATH, "//div[@role='radiogroup']"
    )

    if question_index < len(multiple_choice_questions):
        options = multiple_choice_questions[question_index].find_elements(
            By.XPATH, ".//div[@role='radio']"
        )
        if option_index < len(options):
            highlight_element(driver, options[option_index])
            options[option_index].click()
        else:
            print(f"Option index {option_index} is out of range.")
    else:
        print(f"Multiple-choice question index {question_index} is out of range.")


def fill_name_field(driver, girl_name):
    name_field = driver.find_element(By.XPATH, "//input[@type='text']")
    highlight_element(driver, name_field)
    name_field.send_keys(girl_name)
    print(f"Filled in girl's name: {girl_name}")


def submit_form(driver):
    """Modified submit function with multiple fallback methods"""
    try:
        # time.sleep(1)

        submit_selectors = [
            "//div[@role='button'][contains(@class, 'uArJ5')]",
            "//div[@role='button'][last()]",
            "//div[contains(@class, 'uArJ5')][contains(@class, 'Y5sE8d')]",
            "//div[@role='button'][contains(., 'Submit')]",
        ]

        submit_button = None
        for selector in submit_selectors:
            try:
                submit_button = WebDriverWait(driver, 5).until(
                    EC.presence_of_element_located((By.XPATH, selector))
                )
                break
            except:
                continue

        if submit_button:
            driver.execute_script("arguments[0].scrollIntoView(true);", submit_button)
            # time.sleep(1)

            try:
                submit_button.click()
            except:
                driver.execute_script("arguments[0].click();", submit_button)

            print("Form submitted successfully!")
            # time.sleep(2)
        else:
            print("Could not find submit button")

    except Exception as e:
        print(f"Failed to submit form: {e}")


def main():
    form_url = "https://forms.gle/oeNwBZoF4tGprHMj6"
    driver = setup_driver()
    try:
        for girl_name in girls_names:
            open_google_form(driver, form_url)
            fill_name_field(driver, girl_name)

            for question_index, option_index in question_options.items():
                select_multiple_choice_option(
                    driver, question_index, select_random(option_index)
                )
                # time.sleep(0.3)

            driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
            # time.sleep(1)

            submit_form(driver)
            # time.sleep(2)

    except Exception as e:
        print(f"Main error: {e}")
    finally:
        driver.quit()


if __name__ == "__main__":
    main()
