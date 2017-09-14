#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int dec,bin=0,r,i=1;
    cout<<"Enter the decimal number ";
    cin>>dec;
    while(dec!=0)
    {
    	r=dec%2;
    	dec=dec/2;
    	bin=bin+r*i;
    	i=i*10;
    }
    cout<<"\n The binary equivalent is "<<bin;
    
	return 0;
}
