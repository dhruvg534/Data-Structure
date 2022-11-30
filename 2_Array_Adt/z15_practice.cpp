// https://www.youtube.com/watch?v=kQx7nvN_8e4&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=40
// ceil and floor

#include<iostream>
using namespace std;

void ceil_floor(int array[], int len, int key, int *ceil, int * floor)
{
    int l =0, r= len-1, mid =0;
    while(l<r)
    {
        mid = (l+r)/2;
        if (array[mid]== key)
        {
            *ceil = *floor = mid;
        }
        else if(array[mid]> key)
        {
            r = mid-1;
        }
        else
            l = mid+1;
    }   
    if(array[l] < key && array[l+1] < key) 
    {
        *ceil = l+1;
        *floor = l;
    }
    else if(array[r]>key && array[r-1] < key)
    {
        *ceil = r;
        *floor = r-1;
    }
    return;
}

int main()
{
    int array[]={10,20,30,40,50};
    int a, b;
    a = b = 0;
    ceil_floor(array, 5, 32, &a, &b);
    cout<<a<<" "<<b<<endl;
}

