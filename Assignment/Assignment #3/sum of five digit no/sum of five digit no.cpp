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
cout<<n<<m<<d<<f<<h<<endl;
int sum=n+m+d+f+h;
cout<<sum;
return 0 ;

}
