/* vector -> its a dynamic array thats grow and shrink in size automatically depends on the requirement
-> imagine if there is 4 element and suppose we had fill all 4 elements and now we want fill 5th element then size of array becomes double itself
*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // here is multiple ways to create snd initialize vector 
    vector<int> a;
    // vector of integer 
    vector<int> b(5,10); // 5 integers with value 10  - init A vector or zeros (n,0)
    vector<int> c(b.begin() , b.end());  // copy all the elemnts of b in c
    vector<int> d{1,2,3,10,14};

    // look at how we can iterate over the vector
    for(int i = 0 ; i < c.size() ; i++)
    {
        cout << c[i] <<" ,";
    }
    cout << endl;

    //iterators vector int :: iterators = auto it
    //it is like a pointer that is going to iterates over diff loaction in the dynamic array and this iterator is defined in the vector class
    // vector class -> iterator -> vwctor <int> :: iterator 
    for(auto it = b.begin() ; it!= b.end(); it++)
    {
        cout << (*it) <<" ,";
    }
    cout <<endl;

    //for each loop here for every integer x that lies in vector d     int or auto we can use both 
    for(int x : d)
    {
        cout << x << " ,";
    }
    cout <<endl;

    // discus some more fxns suppose u want to accept elements from users as input
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0 ; i<n;i++)
    {
        int no;
        cin >> no;
        v.push_back(no);    //addition elemnt to the end of the vector
    }
    cout << endl;

    // on the memory level pr actually ye hota ki suppose we have 5 elemnts and we want to add 1 more elemnt in array then memory will find ki max wha 10 elemnts fill krne ki jgh ho and esa hoga ki jo phle avle array k elemnts hai uski copy 10 vae me ho jaygi vo phele vala delete and doubling vala alloacte ho jayga
    // btw doubling the memory is an expensive operation we shoukd try to avoid it 

    for(int x : v)
    {
        cout << x <<",";
    }
    cout << endl;

    // understand at memory level what are the differences in two
    cout << v.size()<<endl;      // size of ki how many elements vector contains
    cout << v.capacity()<<endl;   // size of an underlying array
    cout << v.max_size()<<endl;   //maximum number of elemnts vector can hold in the worst acse according to the memory of the system

    cout << d.size()<<endl;      // size of ki how many elements vector contains
    cout << d.capacity()<<endl;   // size of an underlying array
    cout << d.max_size()<<endl;   //maximum number of elemnts vector can hold in the worst acse according to the memory of the system
    return 0;
}