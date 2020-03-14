#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

void ran_arr(int* arr, int min_num , int max_num,int length)
{
    srand(time(0));
    for (int i=0; i<length; i++)
    {

        arr[i]=rand()%(max_num-min_num+1)+min_num;
    }

}


void print_arr(int* arr, int length)
{
    for (int i = 0 ; i<length ; i++)
    {
       cout<<arr[i] << " ";
    }
}



int main()
{
    int length = 20;
    int arr[length];
    print_arr(ran_arr(arr[length], 2, 200, length), length);

    return 0;
}
