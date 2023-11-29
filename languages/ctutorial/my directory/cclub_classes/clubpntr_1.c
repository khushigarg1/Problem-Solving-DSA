#include<stdio.h>

int main()
/*{
    int var,*pvar;
    var=10;
    //printf("%d",var);
    pvar=&var;
    printf("%ld \n",pvar);
    printf("%ld",pvar);              //ld long integer
    printf("%ld \n",sizeof(var));
    printf("%ld \n",sizeof(pvar));
    return 0;
}*/
/*pointer pvar points to var   pointer is a variable to store address of another variable
pointer me jo address hota hai vo hmesha hexadecimal m hota h islye 8 bytes store krta h
jitna integer uska double mostly
var->ptr is called referencing
ptr-->var is called dereferencing

{
    int var,*pvar;
    var=10;
    pvar=&var;
    printf("%d",*pvar);             //value at address pvar
    return 0;
}*/
/*
{
    
    int var,*pvar;
    var=10;
    pvar=&var;
    pvar++;              //bytes add hogi if pvar 7w2 then 76 ho jayga if int then plus 4 float then +8 if char then +1
    printf("%d",pvar);
    //we cant do arr++ we cant reassign the value 
    return 0;
}
hum pointer ko compare b kr skte h vo data structure m kaam ayga*/
//---->>arr pointer
{
    int arr[10]={11,12,13,14,15,16,17,18,19,20};
   printf("%d\n",sizeof(arr));      //40     arr aayga 40 bcoz 10 variables 4 bytes store 
   printf("%d\n",arr);             //536       base address aayga
   printf("%d\n",&arr);           // 536    base adress symbol table m se aa rahi h
   //arr behaves as a pointer to the frst elemnt of an array and arr does not has a separate 0 bytes of memory
   printf("%d\n",arr[2]);         //13
   printf("%d\n",arr+2);         //536+(2*4) =544 
   printf("%d\n",&arr+2);       // printing address of arr2
   printf("%d\n",&arr+1);      //536+40=576 
   //arr[i] ---> *(arr+i)     
   //i[arr]---> *(i+arr)
   //arr[2] => *(arr+2) => *544
   //we cant reassign arr++   arr=arr++
   //pvar=arr+2;    //544
  // printf("%d",*pvar);
    return 0;
}

//pointer ki separate 8 bytes memomry hoti hai