#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"enter a character\n";
   cin>>c;
   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
   {
     cout<<c<<" is an alaphabet";
   }
   else
   {
     cout<<c<<" is not an alphabet";
   }
   return 0;
}
