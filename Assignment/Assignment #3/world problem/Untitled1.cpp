#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cin>> a;
    int hundred=a/100;
    int q= hundred ;
    cout << q <<endl ;

    int b= (a)%100;
    float fifty = b/50;
    int w= fifty ;
    cout << w <<endl;


int r= (b)%50;
float ten= r/10 ;
int l= ten ;
cout << l;

     return 0;


}

