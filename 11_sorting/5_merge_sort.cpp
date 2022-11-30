#include <iostream>
using namespace std;

void merge(int* arr, int low, int mid, int high)
{
    int arr2[high-low+1];
    int k=0;
    int mid2 = mid;
    int i=low, j= high;
    mid++;
    while(low<mid2 && mid < high)
    {
        if(arr[low]>arr[mid])
        {
            arr2[k] = arr[mid];
            mid++;
            k++;

        }
        else{
            arr2[k] = arr[low];
            low++;
            k++;
        }
    }
    while(low<mid2)
    {
        arr2[k] = arr[low];
        low++;
        k++;

    }
    while(mid<high)
    {
        arr2[k] = arr[mid];
        k++;
        mid++;
    }

    int size = j - i+1;
    for(int a=0; a<size; a++)
    {
        *(arr+a) = arr2[a];
        
    }



}

void merge_sort(int* arr, int low, int high)
{
    int mid =0;
    if(low<high)
    {
        mid = (low + high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high );
        merge(arr, low, mid, high);
    }
}

void display(int arr[])
{
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2};
    merge_sort(arr, 0, 7);
    display(arr);
    
}