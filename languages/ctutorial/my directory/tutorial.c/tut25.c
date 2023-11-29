/*fibonacci seeries*/
/*
fib_recursive(int n)
  if n==1 or n==2
  return n

  else:
  return fib_recursive(n-1) + fib_recursive(n-2)
*/

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main () {
//     int a,b,c;
//     a=0;
//     b=1;
//     printf("%d %d ",a,b);
//     for(int i=1;i<42;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d ",c);
//     }
// return 0 ;
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fib_rec(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return (fib_rec(n-1) + fib_rec(n-2));
    }
}
int main () {
    int res;
    printf("0 ");
    for(int i=0;i<42;i++)
    {
        res = fib_rec(i);
        printf("%d ",res);
    }
return 0 ;
}