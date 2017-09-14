#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
    long bin;
    int j,dec=0,r,i,oct=0;
    cout<<"enter a binary number\n";
    cin>>bin;
    for(i=0;bin!=0;i++)
    {
       r=bin%10;
       dec=dec+(r*pow(2,i));
       bin=bin/10;
    }
    i=1;
    while(dec!=0)
    {
      oct+=(dec%8)*i;
      dec=dec/8;
      i=i*10;
    }
    cout<<"the octal equvivalent is "<<oct;
    return 0;
}
