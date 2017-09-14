#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,r,c=0,oct,i=0,re,dec,num,t;
	cout<<" Enter the octal number ";
	cin>>oct;
	n=oct;
	while(n>0)
	{r=n%10;
	n=n/10;
	c=c+pow(8,i)*r;
	i++;
	}
	

i=1;
    char hex[100],ch;
    dec=c;
    t=dec;
    while(t!=0)
    {t=t/16;
    i++;}
    num=i;
    while(dec!=0)
    {
    	re=dec%16;
    	dec=dec/16;
    	switch(re)
    	{case 1:ch='1';break;
    	case 2:ch='2';break;
    	case 3:ch='3';break;
    	case 4:ch='4';break;
    	case 5:ch='5';break;
    	case 6:ch='6';break;
    	case 7:ch='7';break;
    	case 8:ch='8';break;
    	case 9:ch='9';break;
    	case 10:ch='A';break;
    	case 11:ch='B';break;
    	case 12:ch='C';break;
    	case 13:ch='D';break;
    	case 14:ch='E';break;
    	case 15:ch='F';break;
           	default:
    	break;
    	}
    	hex[i]=ch;
    	i--;
    }
    for(i=0;i<=num;i++)
    {
     cout<<hex[i];
    }
    
    
	return 0;
}
