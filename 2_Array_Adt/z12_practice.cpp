// https://www.youtube.com/watch?v=TCDPgRgCNr0&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=33
//inverse of an array

#include <iostream>
using namespace std;


void inverse(int array[], int len)
{
    int arr[len];
    int x=0;
    for(int i=0; i<len; i++)
    {
        x = array[i];
        arr[x] = i;

    }

    for(int i=0; i<len;i++)
    {
        array[i] = arr[i];
    }
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
    int array[]={1,2,3,4,5,6,7,8,0};
    inverse(array, 9);
    display(array, 9);
}