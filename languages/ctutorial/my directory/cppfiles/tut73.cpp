/****************** MAPS IN CPP *********************/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
#include<map>
using namespace std;

    //mays is an associated array
int main(){
    map <string,int> marksmap;
    marksmap["harry"]=98;
    marksmap["rohan"]=59;
    marksmap["jack"]=2;
    
    /*********inserting elemnts in map**********/
    marksmap.insert({{ "kozume ", 60} , {"kuroooo" , 90}});

    map<string,int> :: iterator iter;
    for ( iter=marksmap.begin() ; iter!= marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" " << (*iter).second<<"\n";
        // ye phela element dega phle pair ka like harry then second 98
    }
    
    cout<<"the size is: "<< marksmap.size()<<endl;
    cout<<"the max size is: "<< marksmap.max_size()<<endl;
    cout<<"the empty's return value is: "<< marksmap.empty()<<endl;
return 0;
}