
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter any character :";
    cin>>a;
    switch(a){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout<<"its a vowel";
    break;
default:
    cout <<"its a constant";

    }
return 0;

}
