// #include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// using namespace std;
/*
//--------------------SEARCHING FUCNTION------------------------
int main(){
    int arr[] ={ 1,2 ,3 ,4 , 4 , 4,5 , 6};
    int n = sizeof(arr)/sizeof(int);
    //search:--- find
    //vector <int> ::iterator = auto
    // for(vector<int>::iterator it =  s.begin()  , it!= s.end() , it++)
    // for(auto it =  s.begin()  , it!= s.end() , it++)
    // cout << *it <<endl; 
    int key;
    cin >> key;
//SEARCH ELEMENT INDEX AND ADDRESS
    // auto it = find(arr , arr+n, key);
    // cout << it<< endl;
    // int index = it-arr;
    // // cout << index <<endl;
    // if(index == n)
    // {
    //     cout << "keyis not present "<<endl;
    // }
    // else{
    //     cout << index;
    // }
//SEARCH ELEMENT PRESENT OR NOT
    bool present = binary_search(arr , arr+n , key);
    if(present)
    {
        cout << "present "<<endl;
    }
    else
        cout << "absent!"<<endl;

//LOWER BOUND AND UPPER BOUND
    auto lb = lower_bound(arr , arr+n , 4);
    //first numebr that is greater than and equal than 4   
    if((lb-arr)==n)
    {
        cout << "array isnot present "<<endl;
    }
    else
    {
        cout << (lb-arr) << endl;
    }
    auto ub = upper_bound(arr , arr+n , 4);
    if((ub-arr)==n)
    {
        cout << "array isnot present "<<endl;
    }
    else
    {
        cout << (ub-arr) << endl;
    }
    //first numebr aht  is strictly greather than 4
    cout << "occurenece frequency of 4 are :"<<  (ub-lb)<<endl;


return 0;
}
*/
/*
-------------------SORTING FUNCTION-----------------
COMPARATOR FUNCTION TO DECREASING ORDER ADN INCREASING ORDER
bool compare(int a , int b)
{
    return a > b;
    // return a < b;
}
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a+n);
    sort(a , a+n , compare);

    return 0;
} 

-----------VECTOR-----------
rotate(arr , arr+2 , arr+n)     ->  TO ROTATE AN ARRAY like from arr+2 to arr+n at starting
vector<int> v ;
vector <int> v{10 , 20 , 30 , 94};          :-DYNAMIC ARRAY 
v.size()                                    :- NUMBER OF ELEMENTS
rotate(v.begin() , v.begin()+3 , v.end())   :- rotate after  the third index of the vector at  the ending of the vector

----------------NEXT PERMUTATION-----------------
next_permutation(v.begin() , v.end());       :- rearrange the elements of the vector
for(int x : v){ }                             :- insteadd of using iterative function for each loop
// ex of emrutation like it is 123 then it will be 132 greather than 123

-------------------SWAPPING---------------------
swap(a , b);                                 :- to swap any two numbers
max(a , b)          :- to find maximum of two numbers
min(a , b)          :- to find min of two numbers
reverse(arrr,arr+5)     :- to reverse an array at 5th elment

-------------------PAIR CONTAINERS---------------
pair<int, char> p;       :- to bind two values as a single entity
                            both values will be rapped inside the single objectt
cout << p.first << " "<<p.second;
pair<int , char> p2(p) ;
cout << p2.first<< " "<< p2.second;
pair <int , string> p3= make_pair(100 , "audi");
cout << p3.first <<" "<<p3.second;

//take input
int a , b;
cin >> a>>b
pair < int ,int > p = make_pair(a ,b);

//array and vector of pairs
//pair of pairs
pair <pair<int , int> , string > car;
car.secodn = "audi";
car.first.first= 10;
car.frist.second = 20;

*/

/*
---------------STL STRINGSS----------
#include <string>   :- header file
string              :- character arrays
string class is like acontainer bcoz it contaisn characetrarray like string s = char carr[40]
string s1("hello");
string s2 = "hello";

string s3(s2);      :- data is copying from s2 to s3
string s4 = s3      :- s4 is also containg the data of s3
cahr a[] = { 'a' , 'b' , 'c' };
string s4(a)        : creating string from character array
s.empty()          :- to check string is empty or not

//APPEND
s.append("hello")   :- modified string
s = s + "anad"      :- addig string

//REMOVE
s.clear()           :- to clear 
s.length()          :- length of a string  how many characetrs

//COMPARE
s.compare(s1);      :- to compare two strings returns an integer ==0 equal , > 0 or < 0

//OVERLOADED OPERATOR OPERATORS
s < s1;
s1 > s;   

/FIND SUBSTRINGS
string s = " i want to have apple ";
int idx = s.find("apple");          
cout << idx ;               :- 15  words charcters

//REMOVE A WORD FROMTHE STRING
string word = "apple";
int len = word.lenth();
s.erase(idx , len);         
s.erase(idx , len+1);           :- to rmeove extra space afterapple
cout << s;                      :- i want to have 

//ITERATE OVER ALL THE CHARACTERS IN THE STRING
for(int i = 0 ; i < s.length() ; i++)
{
    // cout << s[i] << ":";
    cout << s1[i] <<":";
}

//ITERATORS
for(auto it = s.begin() ; it != s.end() ; it++)
{
    cout << (*it)<<endl;       it is a pointer -> the value pointed by it
            if we do *it then we going to value and otehrwise we will getaddress of block
}

//FOR EACH LOOP
for(auto c : s1)            for c character belongs to s1 string
{
    cout << c<<" ";
}

getline(cin , s[i]);        : to take input string

//STR TOKENIZER FUNCTION
char s[] = "it is a rainy day";
char *ptr = strtok(s , " ");
   ptr isbasically a pointer whch points to a first token in the given string
   create a new array where it copies frst token ad return address to ptr
ptr = strtok(NULL , " ");
char s[] = "it, is a rainy, day";
ptr = strtok(NULL , ",");
//all the token one by one printing while ptr != nullptr


char *mystrtok(char *str , char delim)
{
    static cahr *input = nulltpr'
    if(str != NULL)
    {
        input = str;
    }

//check here base case after the final token has returned
if(input == nullptr)
{
    return nullptr;
}

    //start  extraction tokens and store them in an array
    char *output  = new char [strlen(input+1)];
    int i = 0;
    for(; input[i]!='\0' ; i++)
    
    {
        if(input[i]!= delim)
        {
            output[i] = input[i];
        } 
        else
        {
            output[i] = '\0';
            input = input + i+1;
            return ouput;
        }
    }

    //corner case
    output[i] = '\0;
    input = nullptr;
    return output;
}
int  main()
{
    char  s[100]  = "todat is arainy day";
    char *ptr = mystrtok(s, ' ' );
    cout << ptr <<endl;
    char *ptr = mystrtok(s, ',' );
    while(ptr != nullptr)
    {
        ptr = mystrtok (nullptr , ' ');
        cout <<ptr <<endl;
    }
    return 0;
}
*/


/*
--------------------------VECTORS----------------------
#include <vector>
dynamic array   grow and shrink in size
if array fukl then it will do double itself
//CREATING AND INTIITALISING  AVECTOR
vector <int> a;                 
vector <int > b (5 ,10);        five int with value 10 : initialze a vectorof zeros ( n,0)
vector <int > d{1 ,2 3, ,4 5};

//HOW TO ITERATE OVER THE VECTOR
for(int i = 0 ;i<b.size() ; i++)
for(auto it = b.begin() ; it != b.end() ; i++)       //using iterators
{
    cout << c[i] <<" ";
}
vector <int >:: iterators = auto

//for eachloop
for(int x : d)              for every integr x that  lies in vector d
{
    cout << x <<" ";
}

//MORE FUNCTIONS
v.push_back(number) ;       add element at the en dof teh  vector
                            if size is full then it will be twice  i.e. double the size of an vector
                            and last evctor dleted a nd new vector will be created so more memory is used here
v.pop_back()                popout the last element removes the laste lement

v.insert(v.begin()+3 , 100);                      inserting element after the third position
v.insert(v.begin()+3 ,4 , 100);                   inserting 4 element of value 100 after the third position
v.erase(v.begin()+3 );                            removing third elemnet
v.erase(v.begin()+3 , v,begin()+5);               removing third element to fifth elment

//UNDERSTAND AT MEOMORY LEVEL , WHAT ARE THE DIFFERENCES IN THE TWO
v.size()                    size of an vector
v.capacity()                size of an underlying array
v.max_size()                maximum np. of elmeentts vector can hold in the worst acse acc to available memory in vector

//AVOIDING THE SHRINK
v.resize(8);                capacity will become 8 like size will be changed and increase
v.clear();                  removingall the elements of the vector  
v.empty();                  emppty or not
v.front();                  frontmost element
v.back();                   last element

//RESERVE
to avoid doubling we will use reserve function
v.reserve(100);             atleast 100 elements isse jyada ye double nahi hogi
 
vector<pair<int ,int>> v;
v.push_back(make_pair(x, y));
vector <class_name> v; 
*/

/*
----------------------LISTS & FORWARD LISTS---------------
list is like a doubly linked list 
list <int> l
list<int > l{1 , 2,3 ,4 ,5 ,6};
list <string> {"mango" , "aokdjka" , "slsfs"};

l2.push_back("pineapple");
l2.sort()                               to sort all teh elements
l2.revrse()                             to reverse all the elments
l2.front()                              to get front element fo the list
l2.back();                              to get last element
l2.pop_front()                          to popout fo the front element
l2.pop_back()
l2.push_front("msf");                   to push element in the front
l2.push_back("msf");  

for(auto it : l2.begin(); it 1= l2.end() ; l2++)
    cout << *it

for(string s :l)                        to traverse all the elments ofteh list
{
    cout << s <<"---->";
}

string f; cin >> f;
l2.rmeove(f);                           to remove particular elemnt

//eraseone or more elements
auto it = l2.begin()+1;                 we cannot do this bcoz ll is not linear like we cannot access l2i[i] like this
auto it = l2.begin();
it++;                                   to delete fristvelmenet
it++;                                   to delete second elment of the list
l2.erase(it);

l2.insert(it , "fruitjuice" );

//...........FROWARD LIST............
container or list container
only one link to the next element like single linked list

LIST EXAMPLE -> IMPLEMENTING A GRAPH
list <pair<int , int >> *l;                         
list <pair<int , int >> l[100];                         
// listarray

int n ; cin >>n;
l = new list<pair<int ,int>> [n];
//l is now a pointer to an array of a linked list

int e;
cin >> e;
for(int i = 0; i < e; i++)
{
    int x, y, wt;
    cin >> x >> y >> wt;
    l[x].push_back(make_pair(y , wt));
    l[y].push_back(make_pair(x , wt));
}

//print linked list
for((int i = 0 ; i < n ; i++))
{
    //print every linked list
    cout << "linked list "<< i <<"->  ";
    for(auto xp : l[i])
    {
        cout<< "(" << xp.first  <<", "<< xp.second <<"), " ;
    }
    cout << endl;
}
*/


/*-------------STACK-------------
#include<stack>

LIFO ORDER LAST IN FRST OUT
addd  ont he top and delete from starting too
stack <int> s;
s.push(i);      o(1)            to enter a elemnt into stack
s.empty();                      to check stack is empty or not
s.top();        o(1)            to find top element in stack
s.pop();        o(1)            topopout fristelement in stack
*/

/*----------------QUEUE---------------
fifo first in first out
deleting from rear pointer and inserting elemnent from front pointer
queue<int> q;
q.push(i);
q.front();
q.empty();
q.pop();

IMPLEMENT A STACK USING 2 QUEUE
q = fifo and s = lifo

template <typename T>
class Stack
{
        queue <T> q1, q2;
    public :
        void push(T x)
        {
            q1.push(x);
        }
        void pop()
        {
            if(q1.empty())
            {
                return;
            }
            while(q1.size() > 1)
            {
                T element = q1.frotn();
                q2.push(element);
                q1.pop();
            }
            q1.pop();
            // queue<int> temp= q1;
            // q1 = q2;
            // q2 = temp;
            swap(q1,q2);

        }
        int top()
        {
            while(q1.size())
            {
                T element = q1.frotn();
                q2.push(element);
                q1.pop();
            }
            T element = q1.front();
            q1.pop();
            q2.push(element);
            swap(q1, q2);
            return element;
        }
        int size()
        {
            return q1.size() + a2.size();
        }
        bool empty()
        {
            return size()== 0;
        } 
}
   
int main()
{
    Stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty())
    {
        cout << s.top() <<" ";
        s.pop();
    }
    return 0;
}


DEQUEUE-----
dequeue<int> Q(k)


PRIORITY QUEUE
priority_queue<int> pq;
pq.push(num);
pq.empty();
pq.pop();
priority_queue <int , vector<int>, greater<int>>pq;

*/

/*--------------------------MAPS------------------------
map <string , int>  m;
m.insert(make_pair("mango" , 100));
m.find(fruit);
m.end();

it stores unique keys only once
m.count(fruit);                  = particualr key is not present and 1 means it is present
m.erase(fruit);
//update teh rpice
m[fruit] +=22;
m["litch"] = 60;

-----------------MULTIMAPS---------------
#include <map>
multimap<char , string> m;
m.insert(make_pair(ch , s));
m.begin();
auto it = m.begin();
m.erase(it);
m.lower_bound('b');
m.upper_bound('d');
m.find();
*/

/*
----------------------UNORDERED MAPS-------------------
hashtable
insertion erase , deletion all can be happen in O(1) on average
sometimes it m,ay be  o(n) after n elements
#inlcude<unordered_maps>
unordered_map <string , int> um;
um.insert(make_pair("mango" , 100));
  
*/

/*---------------------SET STL--------------
unique elements  
ordered

canoot update in set
O(log n)
insert erase

#include <Set>
int arr [] = {1 2, 3, ,4 ,5 ,6};
set<int> s;
for(int i =  0  ;i < n ; i++)
{
    s.insert((Arr[i]));
}

s.erase(5);
auto it =  s.find(1);
s.erase(it);

printtt
fro(Set <int > iterator it = s.begin() ; it != s.end() ; it++)
{
    cout << *it <<" ";
}

set<pair<<int ,int>>s;
s.insert(make_pair(10 ,12));
s.insert(make_pair(10 ,12));
s.insert(make_pair(10 ,12));
s.insert(make_pair(10 ,12));
s.insert(make_pair(10 ,12));
s.insert(dmake_pair(10 ,12));

s.erase(s.find(make_pair(5, 3)));
auto p : s                fro iterate
p.first << p.second;

lower_bound >=
upperound >

auto it = lower_bound(make_pair((10 ,11)));
cout << it->first << " "<<it->second;

*/