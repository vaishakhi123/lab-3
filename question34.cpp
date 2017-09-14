#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int f,x,l,n,k,y,i=0,swap;
   cout<<"enter a number";
   cin>>n;
   y=n;
   x=n;
   l=n%10;
   while(n!=0)
   {
     f=n%10;
     n=n/10;
   }
   while(x>0)
   {
     x=x/10;
     i++;
   }
  k=y/10;
  swap=k%((int)pow(10,(i-2)));
  cout<<l<<swap<<f;
  return 0;
}



