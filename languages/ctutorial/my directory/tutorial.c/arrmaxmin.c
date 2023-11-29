#include <stdio.h>
#include <conio.h>
void main()
/*{
    int n, i, a[10], max , min ;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the array elements\n");
        scanf("%d", &a[i]);
    }
    printf("array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[0])
            a[0]= a[i];
    }
    printf("maximum elements is %d",a[0]);

    for(i=0;i<n;i++)
    {
         if (a[i] < a[0])
            a[0]= a[i];
    }
     printf("minimum element is %d\n", a[0]);
    getch();
}
*/

{
       int a[5]={1,7,9,3,5};
    int i,max = a[0], min = a[0];

  for(i=0;i<5;i++)
  {
      if(a[i]>a[0])
      {
          max=a[i];
      }
      else if(a[i]<a[0])
    {
      min=a[i];
      }
  }
  printf("maximum elements id %d",max);
  printf("minimum elements id %d",min);
}