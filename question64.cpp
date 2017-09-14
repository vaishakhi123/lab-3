#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int dec=0, oct,r,i=0;
     long bin=0;
     cout<<"enter an octal number\n";
     cin>>oct;
     while(oct>0)
     {
         r=oct%10;
         dec=dec+(r*pow(8,i));
         i++;
         oct=oct/10;
     }
     cout<<"the decimal equivalent of octal is "<<dec;
     return 0;
}
