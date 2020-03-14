#include<iostream>
using namespace std;
int hcf(int x ,int y)
{
    int hcf = 1;
    for (int i=2 ; i<=min(x,y) ; i++)
    {
        while (x%i==0 && y%i==0)
        {
            x = x/i;
            y = y/i;
            hcf = hcf * i;
        }

    }
    return hcf;
}
int main()
{
   cout<< hcf(4,7);
}
