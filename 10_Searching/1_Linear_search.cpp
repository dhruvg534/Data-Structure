/*
Linear search 

we are going to access each element of the array and check this matches the key

*/

/*
Dhruv Goyal
20104134

Code to implement Linear and Binary Search

*/


#include <iostream>
using namespace std;

void search_(int* a,int size, int key)
{
    for(int i =0;i<size;i++) 
    {
        if(a[i] == key)
        {
            printf("%dth element is %d\n",i+1,key);
            return;
        }
    }
    printf("ELEMENT NOT FOUND\n");
}

int Binary_search(int* a, int n, int key)
{
    int left  =0, right =n-1, mid = 0;

    while (left <= right)
    {
        mid = (left + right )/2;

        if (key == a[mid])
        {
            return mid;
        }

        else if (key < a[mid])
        {
            right = mid-1;
            
        }

        else
        {
            left = mid +1;
            
        }

    }
    return -1;
}

int main()
{
   
    printf("\nDhruv Goyal\n20104134\n");
    int arr[10];
    printf("\nEnter the list here: ");
    for(int i=0; i<10;i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the key to be searched: ");
    int key;
    scanf("%d", &key);
    printf("Linear Search\n");
    search_(arr,10,key);
    int ans = Binary_search(arr, 10,key);
    printf("\nBinary Search\n");
    if(ans != -1)
        printf("%dth element in the array is %d ", ans+1, key);
    else
        printf("ELEMENT NOT FOUND\n");

    return 0;
}