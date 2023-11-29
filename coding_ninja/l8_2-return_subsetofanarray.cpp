#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <vector<int>> subsets;
void returnsubset_arr(vector <int> &subset , int i , vector <int > &arr)
{
    if (i == arr.size())
    {
        subsets.push_back(subset);
        return ;
    }
    returnsubset_arr(subset, i+1 , arr );
    subset.push_back(arr[i]);
    returnsubset_arr(subset , i+1 , arr );
    subset.pop_back();
}
int main(){
    int n;
    cout <<" hello enter number of elements " <<endl;
    cin >> n;
    vector <int> arr(n);
    cout << "enter elements from 0 to n "<<endl;
    for(int i =0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }
    vector<int> empty;
    returnsubset_arr(empty , 0 , arr);
    for (auto subset : subsets)
    {
        for(auto ele : subset)
        {
            cout << ele <<" ";
        }
        cout << endl;
    }
    
return 0;
}