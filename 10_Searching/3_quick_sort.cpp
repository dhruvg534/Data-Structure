/*
Dhruv Goyal
20104134

code for quick sort
*/

#include <iostream>
using namespace std;

#define N 7
int arr[N] = {9,4,6,4,8,1,6};


int partition(int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb, end = ub;
    while(start<end)
    {
        while(arr[start] <= pivot)
            start++;
        while(arr[end] > pivot)
            end--;
        if (start<end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    arr[lb] = arr[end];
    arr[end] = pivot;
    return end;
}

void quick_sort(int lb,int ub)
{
    if(lb < ub)
        return;
    int loc = partition( lb,ub);
    quick_sort(lb,loc);
    quick_sort(loc+1,ub);
    
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        cout << array[i]<<", ";
    cout<<endl;
}

int main()
{
    quick_sort(0,7);
    printArray(arr, 7);
}