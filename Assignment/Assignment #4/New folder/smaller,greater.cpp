#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter 3 no.s with space :"; cin>>a>>b>>c;
if(a>b && b>c)
{
    cout<<"greatest no. is :"<<a<<endl;
    cout<<"smallest no. is :"<<c;

}
else if (a>c && c>b)
{
    cout<<"greatest no. is :"<<a<<endl;
    cout<<"smallest no. is :"<<b;

}
else if(a<b && b<c)
{
 cout<<"greatest no. is :"<<c<<endl;
    cout<<"smallest no. is :"<<a;
    }
    else
    {
        cout<<"greatest no. is :"<<b<<endl;
    cout<<"smallest no. is :"<<c;
    }
}
