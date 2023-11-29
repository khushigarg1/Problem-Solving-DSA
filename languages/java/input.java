import java.util.Scanner;

import javax.sound.sampled.SourceDataLine;

public class input {

    string name = "hello";
    System.out.println(name);
    
    Scanner scan = new Scanner(System.in);
    System.out.println("enter input");
    String inp = scan.nextLine();          //complete sentence
    String inp = scan.next();           //it will take only one word till whitespace
    System.out.println(inp);
}
