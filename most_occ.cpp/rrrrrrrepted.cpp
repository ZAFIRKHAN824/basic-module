#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    int min_range=3,max_range=8,length=8;

    int _max=0,_min=INT_MAX,qnty=0,max_qnty=0,rep;
    bool c=0;

    int arr[length];

    //filling array with random values from min_range - max_range
    for(int i=0; i<length; i++)
    {
        arr[i]=rand()%(max_range-min_range+1)+min_range;
    }

    //printing the array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }


    for(int i=0 ; i < length ; i++)
    {
        max_qnty = qnty;

        qnty = 0;

     for(int j=i+1 ; j < length-1 ; j++)
     {

         if (arr[i] == arr[j])
         {
             qnty = qnty+1;
             if (qnty > max_qnty)
            {
                rep = arr[i];


            }
        }
     }
    }
    cout<<endl<<rep;


    return 0;
}
