#include<iostream>
using namespace std;
int main()
{
string health;
char g,l;
int age;
cout<<"Enter person’s health (excellent/poor)";
cin>>health;
cout<<"Enter person’s age:" ;
cin>>age;
cout<<"Enter person’s locality (C=City / V=Village)";
cin>>l;
cout<<"Enter person’s gender (M=Male / F=Female)";
cin>>g;
switch(l){
case 'C' :
    if (health=="poor" || age<25&&age>35 )
        cout<<"person is not granted insurance";
    else if (g=='M')
    {
    cout<<"premium = 4000"<<endl;
    cout<<"policy amount = 200,000";
    }
    else
    {
    cout<<"premium = 3000"<<endl;
    cout<<"policy amount = 100,000";
    }
    break;
case 'V':
    if ((health=="poor" && age>=35&&age<=50) && (g=='M'))
       {
        cout<<"premium = 6000";
        cout<<"policy amount = 20,000";
       }
    else
        cout<<"person is not granted";
}

}
