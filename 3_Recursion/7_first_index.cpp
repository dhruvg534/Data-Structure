#include <iostream>
using namespace std;

int first_index(int arr[], int index, int key)
{
    if(index>=5)
        return -1;
    else if(arr[index] == key)
        return index;
    else
        return first_index(arr,index +1, key);
}

int main(){
    int arr[5] = {10,40,30,40,50};
    cout<<"the index is: "<<first_index(arr, 0 , 40);
    return 0;
}