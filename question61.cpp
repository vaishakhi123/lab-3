#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
     long bin;
     int dec=0,r,i;
     cout<<"enter a binary number\n";
     cin>>bin;
     for(i=0;bin!=0;i++)
     {
       r=bin%10;
       dec=dec+(r*pow(2,i));
       bin=bin/10;
     }
     cout<<"the decimal equvivalent is "<<dec;
     return 0;
}
