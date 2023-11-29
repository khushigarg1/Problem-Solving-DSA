package club_classes;  //package is a collection of related classes

// import java.math.RoundingMode;
// import java.text.DecimalFormat;
// import java.util.Scanner;

public class Tut1 {//class is a collection of attributes(methods/functions and variables)
    //Object is an instance of class.


    public static void getInfo(){
        System.out.println("Good evening!!");
    }

    public static void main(String[] args) {
        System.out.println("This is JAVA tutorials!!!");
        System.out.println("JAVA is a programming language!!!\n\n");
 
        //short long int (float) boolean double char

        double x=39.876623723;      //x=40
        System.out.format("%.0f\n",x);  //for rounding off to n decimal places

        //Object creation:-
        // Scanner obj = new Scanner(System.in);

        //String a=obj.next();
        //System.out.println("The value of a is: "+a);
        //System.out.println(""+x);
        //Tut1 obj1=new Tut1();

        getInfo();

        // float f = 65.7f;

    }
}