#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,r=0,c=0,bin,i=0,re=0;
	cout<<" Enter the binary number\n ";
	cin>>bin;
	n=bin;
	while(n>0)
	{r=n%10;
	n=n/10;
	c=c+pow(2,i)*r;
	i++;
	}
           int dec,k,t;
           i=1;
           char hex[100],b;
           dec=c;
           t=dec;
           while(t!=0)
           {
           	t=t/16;
            i++;
           	
           }
    k=i;
    cout<<"the hexadecimal equivlaent is";
    while(dec!=0)
    {
    	re=dec%16;
    	dec=dec/16;
    	switch(re)
    	{
    		case 1:
    		b='1';
    		break;
             	case 2:
             	b='2';
             	break;
    	            case 3:
    	            b='3';
    	            break;
    	            case 4:
    	            b='4';
    	            break;
            	case 5:
            	b='5';
            	break;
    	            case 6:
    	            b='6';
    	            break;
            	case 7:
            	b='7';
            	break;
            	case 8:
            	b='8';
            	break;
            	case 9:
            	b='9';
            	break;
             	case 10:
             	b='A';
             	break;
            	case 11:
            	b='B';
            	break;
            	case 12:
            	b='C';
            	break;
               	case 13:
               	b='D';
               	break;
    	            case 14:
    	            b='E';
    	            break;
    	            case 15:
    	            b='F';
    	            break;
            	default:
            	break;
    	}
    	hex[i]=b;
    	i--;
    }
    for(i=0;i<=k;i++)
    {
    	cout<<hex[i];
    	
    }
    
    
	return 0;
}
