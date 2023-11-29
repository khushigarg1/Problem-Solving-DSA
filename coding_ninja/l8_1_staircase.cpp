#include<bits/stdc++.h>
using namespace std;

int staircase (int num_staircase)
{
    if (num_staircase < 0)
    {
        return 0;
    }
    if(num_staircase == 0)
    {
        return 1;
    }
    int count =0;
    count = count + staircase(num_staircase - 1);
    count = count + staircase(num_staircase - 2);
    count = count + staircase(num_staircase - 3);
    return count;
}
int main(){
    int n;
    cout << "enter num of stairs : ";
    cin >> n;
    cout << staircase(n) << endl;
return 0;
}