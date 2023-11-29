/*switch ( integer expression )
{  
case value 1 :   
do this ;
  
case value 2 :  
 do this ;  

case value 3 :   
do this ;  

default :   
do this ;
 }*/
 #include <stdio.h>

    int main() {
        int i = 9;

        switch (i) {
            case 5:
            printf("Value is 7");
                break;

            case 0:
            printf("Value is 8");
                break;

            case 9:
            printf("Value is 9");
                break;

            default:
            printf("Value is not present");
                break;
        }
        return 0;
    }
    /*switch(expression 1)
 {
  Case 1:
    printf(“Switch Statement 1”);

switch(expression 2)
{
  Case 1:
  printf(“Switch Statement 2”);
  Break;

  Case 2:
  Do this;
}
break;

 Case 2:
 Do this;
}*/