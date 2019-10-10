#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y;cout<<"enter x-axis";cin>>x;
    cout<<"enter y-axis";cin>>y;
    int r;cout<<"enter radius";cin>>r;
    int c =(pow(x,2))+(pow(y,2));
    if (c>(pow(r,2)))
        cout<<"point is oustside the circle";
    else if (c<pow(r,2))
    {
        cout<<"point is inside the circle";
    }
    else
    {
        cout<<"point is on the line";
    }
}
