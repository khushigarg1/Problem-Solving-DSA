#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &p1,pair<int,int> &p2){
    if((double)p1.first/p1.second >= (double)p2.first/p2.second){
        return true;
    }
    else return false;
}

int main(){
    int n;
    cout<<"Enter number of objects: ";
    cin>>n;
    int w;
    cout<<"Enter capacity of knapsack: ";
    cin>>w;
    vector<pair<int,int>> p(n);
    cout<<"Enter price of objects: ";
    for(int i = 0; i< n; i++){
        cin>>p[i].first;
    }
    cout<<"Enter weigth of objects: ";
    for(int i = 0; i< n; i++){
        cin>>p[i].second;
    }
    sort(p.begin(),p.end(),cmp);
    int tempw = w;
    double profit = 0;
    for(int i = 0; i< n; i++)
    {
        if(tempw>0){
            if(p[i].second <= tempw){
                profit += p[i].first;
                tempw -= p[i].second;
            }
            else{
                profit += (double)p[i].first*((double)tempw/p[i].second);
                tempw = 0;
            }
        }
    }
    cout <<"total profit : "<<profit;

}