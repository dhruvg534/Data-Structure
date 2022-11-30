#include <iostream>
using namespace std;

int* all_indices(int arr[], int key, int index, int fsf)
{
    if(index>= 10)
    {
        int* pointer = new int[fsf+1];
        *(pointer+fsf) =-1;
        return pointer;
    }
    if(arr[index] == key)
        fsf++;
    int *poin = all_indices(arr, key, index+1, fsf );
    if(arr[index] ==key)
    {
        *(poin+fsf-1)= index;
    }
    
    return poin;

}

int main()
{
    int arr[10]={9,4,2,6,7,2,3,6,3,2};
    int* pointer = all_indices(arr,2,0,0);

    if(*pointer==-1)
        cout<<"-1"<<endl;

    int i=0;
    while(*(pointer+i) != -1)
    {
        printf("%d ", *(pointer+i));
        i++;
    }
    return 0;
}

