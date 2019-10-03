#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
float a , b , c;
float s;
float x;
cout << "ENTER THE MEASURMENT OF FIRST SIDE=" ; cin >> a;
cout << "ENTER THE MEASUREMENT OF SECOND SIDE="; cin >> b;
cout << "ENTER THE MEASUREMENT OF THIRD SIDE="; cin >> c ;
s=(a+b+c)/2;
x=sqrt(s*(s-a)*(s-b)*(s-c));
cout << "AREA OF THE TRIANGLE IS " << x ;
return 0;
}
