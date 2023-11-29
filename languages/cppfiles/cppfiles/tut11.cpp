#include<iostream>
using namespace std;

int main()
{
    /*for (int i = 0; i < 4; i++)
    {
        
        if(i==2)
        { 
            break;                         //yhi k yhi loop se exit krva dega
        }
        cout<<i<<endl;
    }*/

    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2)
        {
            continue;            //prgrm wil cntnue but 2 print nh hoga bcoz usne kha is iteraton ko rok kr continue kro
        }
        cout<<i<<endl;
    }
    
return 0;
}
