#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // you can create and initialise a vector
    vector <int> d{1,2,3,4,5};
    // push back o(1) time complexity in order 1 on expanding the way it can take more time
    d.push_back(16);

    //to remove the last elemnt o(1)
    d.pop_back();

    // to insert some elemnts in the middle of the vector
    d.insert(d.begin() + 3 , 100);

    //to add multiple element   4 times 100  o(1)
    d.insert(d.begin()+3 , 4 , 100);

    //erase some elements in the middle
    d.erase(d.begin() + 3);
    d.erase(d.begin() + 3 , d.begin()+6);

    //size
    cout << d.size()<<endl;

    //underlying capacity
    cout << d.capacity() <<endl;

    // we avoid the shrink operation
    // d.resize(8);
    d.resize(18);
    cout << d.capacity()<<endl;// size increases more mermory will be allocated
// yadi cacapcity choti krte hai to ye change nh hogi bas 8 ho jaygi like element sme 0 aa jayga yadi 8 elements nh to if hum size ko resize krk 18 kr dete then underlying capacity 18 ho jaygu

    // to remove all the elements but does not delete the memory occupied by the array
    d.clear();
    cout << d.size()<<endl;

    //empty
    if(d.empty())
    {
        cout << "this is an empty vetor "<<endl;
    }
    cout << d.size()<<endl;

    for(int x : d)
    {
        cout << x <<",";
    }
    cout << endl;
    
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    cout << d.front() <<endl;
    cout << d.back() <<endl;
    
    // reserve
    // int n ;
    // cin >> n;
    // vector <int> v;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     int no;
    //     cin >> no;
    //     v.push_back(no);
        // cout << "changing in capacity"<< v.capacity()<<endl;
    // }
    // cout << "capacity "<< v.capacity()<<endl;
    // // capacity will be 8 if n = 5 bcoz frst elemnt k add hote hi and second k aane pr doubling 2 then 3rd element and it will make 4 and then 5th elemnt it will become 8 

    // for(int x : v)
    // {
    //     cout << x <<",";
    // }
    // it is all fine but it takes more time bczo in the beginning size 1 and everytime adding element and doubling memory then delete previous arraya nd copy back and etc

    int n ;
    cin >> n;
    vector <int> v;
    // to avoid doubling reserve fxn
    v.reserve(10);    //here we had reserve atleast 1000 element isk bd ye double nh hogi capacity will remains same
   
    for(int i = 0 ; i < n ; i++)
    {
        int no;
        cin >> no;
        v.push_back(no);
        cout << "changing in capacity"<< v.capacity()<<endl;
    }
    cout << "capacity "<< v.capacity()<<endl;

    for(int x : v)
    {
        cout << x <<",";
    }

    return 0;
}