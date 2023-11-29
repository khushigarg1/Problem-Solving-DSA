#include<iostream>
using namespace std;
int main()
{
    int count=0 , n , m;
    cin >> n >> m ;
    for(int i =1 ; i <= n ;i++)
    {
        if(i%2!=0)
        {
            for (int j = 1 ; j <= m ; j++)
            {
                cout <<"#";
            }
        }
        else{
            count++;
            if(count%2!=0)
            {
                    for(int a = 1; a <=m-1 ; a++)
                    {
                        cout <<".";
                    }
                    cout <<"#";
            }
            else
            {
                    cout <<"#";
                    for(int b = 1 ; b <= m-1; b++)
                    {
                        cout <<".";
                    }
            }
        }
        cout << endl;
    }
    return 0;
}