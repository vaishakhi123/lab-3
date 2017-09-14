#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,r,c=0,re,oct,i=0;
	cout<<" Enter the octal number ";
	cin>>oct;
	n=oct;
	while(n>0)
	{r=n%10;
	n=n/10;
	c=c+pow(8,i)*r;
	i++;
	}
int dec,bin=0;
i=1;
    dec=c;
    while(dec!=0)
    {
    	re=dec%2;
    	dec=dec/2;
    	bin=bin+(re*i);
    	i=i*10;
    }
    cout<<"\n The binary equivalent is "<<bin;
    
	return 0;
}
