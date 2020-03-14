#include<iostream>
using namespace std;

int lcm(int x, int y){
    int num = 2;
    int lcm = 1;

    while(x>1 || y>1){
            bool hasDivided = false;
        if(x%num == 0){
            x = x/num;
            hasDivided = true;
        }

        if(y%num == 0){
            y = y/num;
            hasDivided = true;
        }

        if(hasDivided){
            lcm = lcm * num;

        }
        else {
            num = num+1;
        }
    }

    return lcm;
}

int main()
{
    int x,y;

    cout << lcm(8, 8);

    return 0;
}
