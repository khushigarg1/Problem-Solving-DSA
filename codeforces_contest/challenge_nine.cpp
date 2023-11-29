#include<bits/stdc++.h>
using namespace std;

int main(){
    int ttt;
    cin>>ttt;
    for(int abc = 1; abc <= ttt; abc++){
        
        string n;
        cin>>n;
        int sum = 0;
        for(int i = 0 ; i< n.length(); i++){
            sum+= n[i] - 48;
        }
        unordered_map<int,string> mp;
        mp[0] = "0";
        mp[1] = "1";
        mp[2] = "2";
        mp[3] = "3";
        mp[4] = "4";
        mp[5] = "5";
        mp[6] = "6";
        mp[7] = "7";
        mp[8] = "8";
        mp[9] = "9";
        // cout<<sum<<endl;
        if(sum % 9 == 0){
            n.insert(1,"0");
            cout<<"Case #"<<abc<<": "<<n<<endl;
            
        }
        else{
            int i = 0;
            int x = min(sum % 9,9 - sum);
            // cout<<x<<endl;
            while(i < n.length()){
                // cout<<n[i]-48<<endl;
                if(x < (n[i] - 48))
                {
                        break;
                }
                i++;
            }
            n.insert(i,mp[x]);
            cout<<"Case #"<<abc<<": "<<n<<endl;
        }
        // if(flag){
        //     for(pair<char,int> p:mp){
        //         count += p.second;
        //     }
        //     cout<<"Case #"<<abc<<": "<<count<<endl;
        // }
        // else{
        //     cout<<"Case #"<<abc<<": "<<"IMPOSSIBLE"<<endl;
        // }
        
    }
}