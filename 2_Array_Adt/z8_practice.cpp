// https://www.youtube.com/watch?v=aSb29e8OoZs&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=25
// sum of 2 arrays

#include <iostream>
using namespace std;

void sum_of_arrays(int arr[], int an ,int brr[], int bn)
{
    for(int i=1; i<=an && i<=bn; i++)
    {
        arr[an-i] = arr[an-i]+brr[bn-i];
        if(arr[an-i]/10 )
        {    
            arr[an-i-1] += arr[an-i]/10; 
            arr[an-i] = arr[an-i]%10;
        }

    }

    for(int i = 0; i<an; i++)
    {
        cout<< arr[i]<<" ";
    }  
}

int main()
{
    int arr[5] = {1,2,3,9,8};
    int brr[3] = {1,2,8};
    sum_of_arrays(arr, 5, brr, 3);
}