/*
recursion ka main principle hai pmi principle
pmi = principle of mathematical induction it was used to use some facts

f(n) is true for all antural nu,mbes
1-> prove f (0) on f(1) is true 
2 -> induction hyphotheiss -> assume f(k) is tru 
3-> induction step : using 2 prove that f(k+!) is true 
we have to prov ebase case and induction stpe and 2nd step ko assume krna hota hai

like this in recursion we have to see base case and last step and assume kr lo el k lye ki all steps are true
base se upr phr next phr next 
hm prove kr chuke hai ki yadai ksii k k lye true hai to k +1 true hoga like f(0) true then 0+1 1 is tru and then 1+1=2 is also true like this be continue
choti prblm ko use krk bdi prblm solve krni hai
n step acche se solve krni hai and usk bd small step

*/

#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1; //base case
    }
    int smalloutput = factorial(n-1);     //assumption
    int output = n * smalloutput;
    return output;
}
int main(){
    int n ;
    cin >> n;
    cout << factorial(n) <<endl;
return 0;
}

/*
base case
then assume ki choti prblm k lye chl jayga
then badi prblm ke lye we have to do code bilkul acche se
*/