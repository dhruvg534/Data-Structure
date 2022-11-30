// https://www.youtube.com/watch?v=8RErc0VXAo8&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=32
// rotate an array

#include <iostream>
using namespace std;

void swap(int * a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}
void rotate(int array[], int length, int k )
{
    if(k>0)
        k = k% length;
    if(k<0)
        k = k + length;
    reverse(array, 0, length-k-1);
    reverse(array, length-k , length-1);
    reverse(array, 0, length-1);
}

void display(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    rotate(array, 9, 3);
    display(array, 9);
}