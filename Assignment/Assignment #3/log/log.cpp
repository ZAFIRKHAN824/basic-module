#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a1=150.0;float a2=220.0;float b1=3.0;float b2=11.0; float x=1.7;float y=3.15;
    float c=log(a1/b1) ; float d=log(a2/b2);float e=1/cos(30+(a1+a2)/(a2+b2));
    cout << pow(x,c)+ pow(y,d)-e;
}

