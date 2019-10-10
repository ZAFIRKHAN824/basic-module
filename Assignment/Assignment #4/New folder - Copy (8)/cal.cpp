#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"1) ADDITION"<<endl<<"2) SUBTRACTION"<<endl<<"3) MULTIPLICATION"<<endl<<"4) DIVISION"<<endl<<"5) RAISE TO THE POWER"<<endl<<"6) EXIT"<<endl;
    int a;
    cout<<"enter a no. b/w 1 to 6 :";
    cin>>a;
    double c,b;
if (a>=1 && a<=6)
{

    switch (a){
case 1:
    cout<<"enter 2 no.s with space :" ;
    cin>>b>>c ;
    cout<<c+b;
    break;
case 2:
    cout <<"enter 2 no.s with space :";
    cin>>b>>c;
    cout<<b-c;
    break;
case 3:
    cout<<"enter 2 no.s with space  :" ;
    cin>>b>>c ;
    cout<<b*c;
    break;
case 4:
    cout<<"enter 2 no.s with space  :" ;
    cin>>b>>c ;
    cout<<b/c ;
    break;
case 5:
    cout<<"enter 2 no.s with space  :" ;
    cin>>b>>c ;
    cout<< pow(b,c);
    break;
}
    return 0;
}
}
