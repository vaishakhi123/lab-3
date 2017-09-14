#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main() {
    int i=0,j,dec,c, oct=0,r;
    char ch,hex[100];
    cout<<"Enter the hexadecimal number ";
    cin>>hex;
    c=strlen(hex);
    c=c-1;
    while(c>=0)
    {ch=hex[i];
    switch(ch)
{       case '1':j=1;break;
    	case '2':j=2;break;
    	case '3':j=3;break;
    	case '4':j=4;break;
    	case '5':j=5;break;
    	case '6':j=6;break;
    	case '7':j=7;break;
    	case '8':j=8;break;
    	case '9':j=9;break;
    	case 'A':j=10;break;
    	case 'B':j=11;break;
    	case 'C':j=12;break;
    	case 'D':j=13;break;
    	case 'E':j=14;break;
        case 'F':j=15;break;
    	default:break;
}
i++;
dec=dec+j*pow(16,c);
c--;} 
i=1;

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

