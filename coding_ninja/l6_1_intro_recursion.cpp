/****RECURSION
we will use only recursion probems in data structure mainly prblms
recyrsion is when a fxn calling itsel fbut actaul me yr glt hai we will think it as a PMI
n! hai like ab isme n* n-1 * n-2 * n-3 * ..........1
                    n* n-1!
                f(n) = n * f(n-1)
recursion works when a problem depend on a same nature with a smaller input size than before 
ek bdi prblm ko chota krte krte means ye small pr depend kregi 
*/

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int smalloutput = factorial(n-1);
    if(n==0)
    {
        return 1;
    }
    return n*smalloutput;
}

int main(){
    int n ;
     cin >> n;
     int output = factorial(n);
     cout << output <<endl;
return 0;
}

/*
main 
 |
 v
fact(4)   = n = 4
 |
 v
fact(3)   = n = 3
 |
 v
fact(2)   = n = 2
 |
 v
fact(1)   = n = 1
 |
 v
fact(0)   = n = 0
  .
  .
  .
  .
  .
sb fxns beth kr wait krterhnge y infinite phuh jayga islye apnko ye 0 ki cndtn lgani pdegi ya esi jha vo tsop ho jaye vrna memory will make bulky and it will guvesegmantation fault
we should make sure  ki recursion stop khi na kahi
0 ko use krk 1 ne ans bnaya 
1 ko use rkk 2 ne ans bnaya 
 2 ko use krk 3 ne ans bnaya
3 ko su ekrk 4 ne bnaya ese 
ans 24 aa gya 4! ka 
sbe phle main se fxncall honge vo ate jaynge or phr laast smaller se chlega ek ek ko use krk 
har factorial betha wait krta rhega jab tak 0 nhi at or value 1 nhi ati 
sb fxn ne jo memory store kr rkhi thi bd me dhere sb destroy hote jaygi automatically jse jse use hogi
its liek a glass 
jse sbse phle f 5 dla phr f 4 phr f3 phr f2 hr f1 to sbse phle f1 bhar jayga apna kam krk phr f2 ;hr f3 phr f4 like this continue 
jis fxn me order aaynge usk ulte order me fxn bhar jaynge jse main sbse phle aayga or vo sbse 
jyada wait krega 
this is called call stack 
*/