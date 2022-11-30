// https://www.youtube.com/watch?v=CuvSfyO5iRU&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=30
//reverse an array


#include <iostream>
using namespace std;

void swap(int* a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[] , int an)
{
    int start =0; 
    int end = an-1;

    while(start<end)
    {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    reverse(arr, 5);
    display(arr, 5);
}