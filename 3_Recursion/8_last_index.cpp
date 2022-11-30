#include <iostream>
using namespace std;

int last_index(int arr[], int index, int key)
{
    if(index >= 5)
        return -1;
    int index__ = last_index(arr, index+1,key );
    if(index__ != -1)
        return index__;
    else if(arr[index]== key)
        return index;
    else
        return -1;
    
}
int main()
{
    int array[5]={10, 20, 40, 20, 50};
    cout<<last_index(array, 0, 20);
    return 0;
}