#include<iostream>
#include<string>
using namespace std;
 int main()
 {
     string a="indian institute of technology";
    int i,tsum=0,isum=0,sum=0;

    for(i=0;i<a.length();i++)
    {
      if(a[i]=='t'|| a[i]=='T')
      tsum++;
    
      if(a[i]=='i'|| a[i]=='I')
      isum++;
    }
    cout<<tsum<<" "<<isum<<" ";

    sum =tsum + isum;
    cout<<sum;
 
 }