// import java.util.*;  
// class pallindrome   
// { 
// public static void main(String[] args)  
    // { 
    //     Scanner sc = new Scanner(System.in);    //System.in is a standard input stream like cout in cpp
    //     System.out.print("Enter first number- ");  
    //     int a = sc.nextInt();  
    //     System.out.print("Enter second number- ");  
    //     int b = sc.nextInt();  
    //     System.out.print("Enter third number- ");  
    //     int c = sc.nextInt();  
    //     int d = a+b+c;  
    //     System.out.println("Total= " +d); 
    // }  
// } 

import java.util.*;
class pallindrome
{
    public static void main(String[] args)
    {
        Scanner obj = new Scanner(System.in);
        String a = obj.nextLine();
        System.out.println(a);
        int n = (a.length()/2);
        int size = a.length()-1;
        int flag = 1;
        for(int i = 0 ; i < n; i++)
        {
            if(a.charAt(i) != a.charAt(size))
            {
                flag = 0;
                break;
            }
            size--;
        }
    
        System.out.println("hey");
        if(flag == 1)
        {
            System.out.println(a + " is a Pallindrome");
        }
        else
        {
            System.out.println(a + " is not a Pallindrome");
        }
    }
}