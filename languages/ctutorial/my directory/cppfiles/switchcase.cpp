#include<iostream>
using namespace std;
int main()
/*{
    char a;
    cout<<"enter a character\n";
    cin>>a;
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"vowel";break;
        
        default :
        cout<<"wrong choice";
        break;
    }
}*/

{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    switch(a+b)
    {
        case 1:cout<<"hyy1"<<endl;
        break;
        case 2:cout<<"hyy2"<<endl;
        break;
        case 3:cout<<"hyy3"<<endl;
        break;
        case 4:cout<<"hyy4"<<endl;
        break;
        case 5:cout<<"hyy5"<<endl;
        break;

        default:
        cout<<"wrong choice";
        break;
    }
}