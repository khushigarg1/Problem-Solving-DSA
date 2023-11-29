#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

// array me ek prblm thhat like we ccanot decide size of arrays on run tiem we have to decide actual size on compile time its is the biggest problem of an array
// it should be absoluely clear on compile time ki which size of array we want to use bcoz
/*
stack or heap memory hoti hai jab b allocate krte hai stack kam nd heap jyada jb prgrm run then tack mmeorynle kr start    int i sbka data memory stack me allocatehoti hai 
or ydi apnne a[2000000000] itna bda array ban dya nd we kno wthis on compile time then ye le kr chlega stack me utni hi memory so no issue prblm comes when u dont know howmuch memory stack will take 

apn yadi phle sirf ar ko declare krte hai or size input me to yha bht se compiler me error bcoz prgrm top to bottom run hoga nd use memory allocate rknihoti h starting me usk bd vo change nh kr skta or input me bht bdi size de di then window can be crashed
we cannot memory on heap  abhi tak ki heap pr memory kse allocate kre aaj vhi iskhnge here run time pr b daal skte hai DYNAMIC MEMORY ALOCATION run time
static = sttic memory allocation compile time

SYNTAX 
new int;  it is useless if we write this only bcoz memory bn gy but humne usko khis tore or access hi nh kya
int* p = new int;    4 bytes allocation  a int type nd a pntr which storing that address
8 bytes fo pntr nd 4 bytes for integer
*p is basically a derefernecing memory to heap 

*/

int main(){
    int* p = new int;
    // 8 bytes in pntr nd 4 bytes of int
    *p = 10;
    cout << *p << endl;

    double * pd = new double ;
    char* pc = new char;
    
    int* p1 = new int[50];    // 200 in the heap and 8 bytes in stack

    int n;
    cout << "enter the no. of elements";
    cin >> n;
    // pa2[0] = 10   *(pa2 +0)
    int* pa2 = new int[n];   // we can take input easily nd hwo much memory we want utni hi memory compiler lega
    int max = -1;
    for(int i =0; i < n ; i++)
    {
        cin >> pa2[i];
    }
    for(int i=0; i< n; i++)
    {
    if(max < pa2[i])
    {
        max = pa2[i];
    }
    }
    cout << max << endl;
    
    delete p;
    delete pd;
    delete pc;
    delete [] p1;
    delete [] pa2;
return 0;
}
/*
status = automatic release on basis of scope
dynamic = manual release is required so we hvae ot delete it
while (true)
{
    int i = 10;    // ye prgrm chlega tab evvery iteration k bd mmeory destroy ho jaygi jo hr int k 4 bytes honge
    int* p = new int[10];   // yha memory destroy nh hogi bdti jaygi bdti jaygi so 4+4+4 nd crash
}
*/