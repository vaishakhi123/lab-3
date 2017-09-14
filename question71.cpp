#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main() {
	 
        char hex[17];
        long dec=0,pl=1;
        int i=0,val,len;
        cout<<"enter any hexadecimal number\n";
        cin>>hex;
        len= strlen(hex);
        len--;
        for(i=0;hex[i]!='\0';i++)
        {
        	if(hex[i]>='0'&&hex[i]<='9')
        	    val=hex[i]-48;
        	else if(hex[i]>='A'&&hex[i]<='F')
                val=hex[i]-55;
            else if(hex[i]>='a'&&hex[i]<='z')
                 val=hex[i]-88;
            dec=dec+(val*(pow(16,len)));
            len--;
        }
        cout<<"the decimal equivalet is "<<dec;
        
                 
   

        return 0;
}