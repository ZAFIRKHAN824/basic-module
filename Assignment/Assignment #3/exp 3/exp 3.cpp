#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a1=3.0;
float a2=2.0;
float b1=5.0;
float b2=1.0;
float x =75.0;
float f=2*sqrt(x*3.142/180);float f1=3*cbrt(x*3.142/180);
cout<< a1*cos(f)+b1*sin(f)+a2*cos(f1)+b2*sin(f1);

return 0;
}
