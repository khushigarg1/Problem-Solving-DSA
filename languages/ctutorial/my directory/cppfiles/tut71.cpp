/***********vectorn in c++ stl*******************/
/* c++.com */
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

template<class t>
// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<< " ";
//         cout<<v.at(i)<< " ";              //ye dono same h kuch b use kr skte hai jo at se print vhi usk just upr vale se
//     } 
//     cout<<endl;
// }

void display(vector<t> &v)
{
    cout<<" displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    } 
    cout<<endl;
}

int main(){
    // WAYS TO CREATE A VECTOR 
    // vector < int> vec1;                  // zero length vector 
    // vector automatically manage size of array if array of size 5 then we can add elements or delete also without tension
    //int element, size;
    // cout<<"enter the size of your vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<" enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //vec1.pop_back();

    // int element , size = 5;
    // vector <int> vec2;
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // //vec1.insert(iter , 566);               //starting me insert kr dega
    // //vec1.insert(iter+1 , 566);            //ye ab 2 pr insert krega
    // vec1.insert(iter+1, 5, 566);           //now it will insert 5 copies of 566 
    // display(vec1);
    

    vector <int> vec1;               // zero length integer vector 
    // display(vec1);          //isme kuch h hi nh so nothing will print
    vector <char> vec2(4);              // 4 element character vector
    // vec2.push_back('5');
    // display(vec2);
    vector <char> vec3(vec2);          // 4-eleemnt character vector frm vec2
    //display(vec3);
    vector < int> vec4(6,3);          //6 element of 3s
    display(vec4);
    cout<<vec4.size();             //it will prit size of vec4

    
return 0;
}