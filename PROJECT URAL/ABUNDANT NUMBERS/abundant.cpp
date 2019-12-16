#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter the no. = ";
    cin>>num;
    for (int i = 1 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
            cout<<i<<"+";
        }

    }
    cout<<" = "<<sum<<endl;;
    if(sum==num)
        {
            cout<<"perfect number";
        }
        else if(sum<num)
        {
            cout<<"deficient no. ";
        }
        else
            cout<<"abundant no.";

    return 0;
}
