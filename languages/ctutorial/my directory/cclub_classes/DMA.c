#include<stdio.h>
#include<stdlib.h>
/*int main()
{
    //static
    //int n;
    //scanf("%d",&n);
    //int arr[n];              yha means wastage hota hai yadi apn 500 arrays or memory to store ho jaygi nut nh kre then waste
    
    //heap
//    new int;     //heap k andr jao or meory bna do
    // int *p =  new int[50];      //p bnega stack memory me jo point krega p ko 
    // *p =10;              //int var bnega heap me
    // //8+ 4 = 10 bytes
    // p[0]= 10;

    return 0;
}

stack memory (static)= samll;
             it is used for compile time
             static allocation
heap (dynamic) = comparitevely big
                run time, dynamic

*/       

/*
int main()
{
    //int * p= new int;
    // while(1)
    // {
    //     int i;
    // }           //allocate or deallocateing hoti rhegi stack m   ek br loop chla memory bnegi or dlt do memory ko jyada phrk nh pdega

    //int i;
    while (1)
    {
        int *p= new int;
        delete(p);
        int *p= new int[100];
        delete[]p;
    }                    //isme meory bnti jaygi bnti jaygi or ye bhrti jayggi 
    //yha memroy bahut sari ho jaygi bcoz automatically delet nh hoti heap me
    return 0;
}
*/

//malloc alloc