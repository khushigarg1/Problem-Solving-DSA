#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int n , temp;
    cin >> n;
    vector<int> level(n+1,0) ;
    int size;
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cin>>temp;
        level[temp] = 1;
    }

    cin>> size;
    for (int i = 1; i <=size; i++)
    {
        cin >> temp;
        level[temp] = 1;
    }

    for(int i=1;i<=n ; i++){
        if(level[i] !=1){
                cout << "Oh, my keyboard!";
        return 0;
        }
    }
     cout <<"I become the guy." ; 
    
return 0;
}