// https://www.youtube.com/watch?v=lUdWGkCUD54&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=36
// subarrays of an array

#include <iostream>
using namespace std;

void subarrays(int array[], int len)
{
    int start =0;
    for(; start<len ; start++)
    {
        for(int j = start; j<len; j++)
        {
            for(int i= start; i<j; i++)
                cout<<array[i]<<" ";
            cout<<endl;
        }
        
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
    int array[]={1,2,3,4,5};
    subarrays(array, 5);
    display(array, 9);
}