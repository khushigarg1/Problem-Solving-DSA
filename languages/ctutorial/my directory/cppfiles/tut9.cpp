#include <iostream>
using namespace std;

int main()
{
    //cout<<"this is tutorial 9";  //isk phle sab sequence
    //******selection control structure if else,if else ladde******
    int age;
    cout << "tell me your age: " << endl;
    cin >> age;
    if ((age < 18) && (age > 0))
    {
        cout << "you can not come to the party";
    }
    else if (age == 18)
    {
        cout << "no";
    }
    else if (age < 1)
    {
        cout << "you are not born yet";
    }
    else
    {
        cout << "you can come to the party";
    }
}

    //selection control structure;switch case statements
//     switch (age)
//     {
//     case 18:
//     {
//         cout << "you are 18";
//         //break;
//     }

//     case 22:
//         cout << "you are 22";
//         //break;

//     default:
//         cout < "no special cases";
//         //break;
//     }
// }