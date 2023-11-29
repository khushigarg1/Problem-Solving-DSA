// TUTORIAL 2-:
package club_classes;

import java.util.Random;
/* 1 */ class Phone{
    //void Constructor:-
    Phone(){
       System.out.println("I am Parent class/Super class");
    }

    //Parameterized Constructor:-
    Phone(int a){
        System.out.println("This parent class' constructor gave the value: "+a);
    }
    public void call(){
        System.out.println("Calling...");
    }
    public void call(int a){
        System.out.println("This is an overloaded method...");
    }
    public void msg(){
        System.out.println("Sent successfully...");
    }
    public void playGame(){
        System.out.println("Playing a game...");
    }
        }

/* 2 */ class Smartphone extends Phone{
    Smartphone(){
        super(3);
        System.out.println("Hello I am Child class/ Sub class");
    }
    public void getLocation(){
        System.out.println("User location traced...");
    }
    public void playMusic(){
        System.out.println("Playing Music...");
    }
}


public class Tut2 {
    public static void main(String[] args) {
        Phone p = new Phone();
        Smartphone sp =new Smartphone();
        /*p.msg();
        sp.msg();
        //System.out.println(p+"");*/

        Random r=new Random();
        System.out.println(r.nextInt(10)); //0-9
        /*if(){

        }
        else{

        }*/
        int num=r.nextInt(3);
        switch (num) {
            case 0 -> System.out.println("Heyy I am zero!!!");
            case 1 -> System.out.println("Heyy I am one!!!");
            default -> System.out.println("LMAO I am two!!!");
        }
    }

}