#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int m;
cout <<"1)LINEAR EQUATIONS"<<endl<<"\n2)QUADRATIC EQUATIONS\n\nCHOOSE ANY ONE OF THEM :";
cin>>m;
 float a1,b1,c1,a2,b2,c2,x1,x2,y1;

if (m==1){
    cout << "\n***************** LINEAR EQUATION (anX + bnY = c) *******************\n\n";
    cout<<"enter a1 :";cin>>a1;
    cout<<"enter b1 :";cin>>b1;
    cout<<"enter c1 :";cin>>c1;
    cout<<"enter a2 :";cin>>a2;
    cout<<"enter b2 :";cin>>b2;
    cout<<"enter c2 :";cin>>c2;
    x1=(b2*c1-b1*c2)/(a1*b2 - a2*b1);
    y1=(c2*a1-c1*a2 )/(a1*b2 - a2*b1);
    float f=a1*b2-a2*b1;
    if (f==0)
        cout<<"NO SOLUTION";
    else
    cout<<"x = "<<x1<<"y = "<<y1;
}
else if (m==2)
{
    cout << "\n************* QUADRATIC EQUATION (aX^2 + bX + c = 0) ****************\n\n";
    cout<<"enter a1 :";cin>>a1;
    cout<<"enter b1 :";cin>>b1;
    cout<<"enter c1 :";cin>>c1;
    x1=(-b1+(sqrt(pow(b1,2)-4*a1*c1)))/(2*a1);
    x2=(-b1-(sqrt(pow(b1,2)-4*a1*c1)))/(2*a1);
    float d=(pow(b1,2)-4*a1*c1);
    if (d==0 || a1==0)
        cout<<"SOLUTION DOESNOT EXIST";
    else
        cout <<"x1 = "<<x1<<endl<<"x2 = "<<x2;
}
else
return 0;

}
