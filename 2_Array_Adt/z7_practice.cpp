// https://www.youtube.com/watch?v=L-0IxqvYQKs&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=24
// bar chart from an array
// important and fun to solve

#include <iostream>
using namespace std;

int bar_char(int arr[], int size)
{
    int max = 0;
    for(int i = 0; i<size; i++)
    {
        if( max <arr[i])
            max = arr[i];
    }
    while(max)
    {
        for(int i=0; i<size; i++)
        {
            if(arr[i] >= max)
            {
                printf("* ");
            }
            else 
                printf("  ");
        }
        printf("\n");
        max--;
    }
    return 0;

}

int main()
{
    int arr[5] = {1,5,3,1,5};
    bar_char(arr, 5);
    return 0;
}