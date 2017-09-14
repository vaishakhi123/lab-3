#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int dec,oct=0,r,i=1;
cout<<"Enter the decimal number ";
    cin>>dec;
    while(dec!=0)
    {
    	r=dec%8;
    	dec=dec/8;
    	oct=oct+r*i;
    	i=i*10;
    }
cout<<"\n The octal equivalent is "<<oct;
	return 0;

}
