// https://www.youtube.com/watch?v=LQom9iFG1F0&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=27
// Difference_ of 2 arrays

#include <iostream>
using namespace std;

void difference_(int *arr, int an, int* brr, int bn)
{
    for(int i=1; i<= bn ; i++)
    {
        if(*(brr+ bn -i) < *(arr +an-i))
            *(arr + an-i ) -= *(brr + bn-i);
        
        else
        {
            *(arr + an -i) +=10;
            *(arr +an-i-1) -= 1;
            *(arr + an -i) -= *(brr +bn -i);
        }
    }
}

void difference2(int arr[], int an, int brr[], int bn)
{
    for(int i=1; i<= bn; i++ )
    {
        if(arr[an -i]> brr[bn-i])
            arr[an-i] -= brr[bn-i];
        else{
            arr[an-i]+= 10;
            arr[an - i -1] -= 1;
            arr[an-i] -= brr[bn-i];
        }
    }
}

void display(int arr[], int an)
{
    for(int i=0; i<an; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int brr[3] = {9,9,9};
    // difference_(arr, 5, brr, 3);
    difference2(arr, 5, brr, 3);
    display(arr, 5);
    
    return 0;


}