#include<iostream>
#include<cmath>
using namespace std;

double sum(double num1, double num2){
    return num1 + num2;
}
double sub(double num1, double num2){
    return num1 - num2;
}
double factorial (double num1){
    int fact=1;
    for (int i=num1 ; i>=1 ; i--)
    {
        fact=fact*i;
    }
    return fact;
}
double multiplication(double num1, double   ){
    return num1 * num2;
}
double division(double num1, double num2){
    return num1 / num2;
}
double power(double num1, double num2){
    return pow(num1,num2);
}
double sin(double num1){
    if (num1 == 0)
        return 0;
         if (num1 == 30)
        return 0.5;
         if (num1 == 45)
        return 0.747;
         if (num1 == 60)
        return 0.866;
         if (num1 == 90)
        return 1;
}
double sin(double num1){
    if (num1 == 0)
        return 0;
         if (num1 == 30)
        return 0.5;
         if (num1 == 45)
        return 0.747;
         if (num1 == 60)
        return 0.866;
         if (num1 == 90)
        return 1;
}



double calculator(double num1, double num2, string op){
    if(op == "+") return sum(num1, num2);
    else if(op == "-") return sub(num1,num2);
    else if (op == "!") return factorial(num1);
    else if(op == "/") return division(num1,num2);
    else if(op == "*") return multiplication(num1,num2);
    else if(op == "^") return sub(num1,num2);
    else if(op == "-") return sub(num1,num2);
    else if(op == "-") return sub(num1,num2);
    else if(op == "sin") return sin(num1);
}



int main()
{


}
