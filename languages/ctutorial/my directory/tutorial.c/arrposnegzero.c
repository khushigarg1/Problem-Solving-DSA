#include <stdio.h>
#include <conio.h>
void main()
{
   int i, n, a[10], pos = 0, neg = 0, zero = 0;
   printf("enter numbers");
   scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      printf("enter array elements");
      scanf("%d\n", &a[i]);
   }

   printf("array elemnts are\n");
   for (i = 0; i < n; i++)
   {
      printf("%d\n", a[i]);
   }

   for (i = 0; i < n; i++)
   {
      if (a[i] > 0)
         pos++;
      else if (a[i] < 0)
         neg++;
      else
         zero++;
   }

   printf("positive number is %d", pos);
   printf("negative is %d", neg);
   printf("zero is %d", zero);

   getch();
}