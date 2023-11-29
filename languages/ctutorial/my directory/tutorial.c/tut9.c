#include<stdio.h>
#define PI=3.14
int main()
/*{
    int a=8;
    float b=7.33;
    // printf("%d",a);
    //printf("%f",b);
    //printf("the value of a is %d and the value of b is %.5f",a,b);     //if we write %12.4 then b ki value isi according aayegi
    //printf("%-18.4f this",b);    //18 character ki space le lega 

    return 0;
}*/
{
    int a=8;
    const float b=7.333;
   // b=7.22;   //cannot do this since b is a constant
   printf("my backslash \\ %f",b);   //it will give \\=\ or \n =newline character \t=space character

}

