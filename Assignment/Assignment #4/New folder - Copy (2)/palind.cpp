
#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"enter 5 digit no. :";cin>>a;
 int n= a%10;int b=a/10;
 int m=b%10;int c=b/10;int d=c%10;
 int e=c/10;int f=e%10;
 int g=e/10;int h=g%10;
 int i=(n*10000)+(m*1000)+(d*100)+(f*10)+h;
 if ((i-a)==0)
    cout<<"no. is palindrome";
    else
 {
     cout<< "it is not palindrome";
 }

return 0 ;

}

