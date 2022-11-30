//Dhruv Goyal (20104134)
#include <iostream>
using namespace std;

int min_index(int *p, int size)
{
    int min =0;
    for(int i=0; i <size;i++)
    {
        if( *(p+i) < *( p + min ) )
            min = i; 
    }
    // cout<<min<<endl;
    return min;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[])
{
    for(int i=0 ; i<9 ; i++)
    {
        int min = i+ min_index(&arr[i], 10-i);
        if(arr[min] < arr[i])
            swap(&arr[min], &arr[i]);
        
    }
}

void display(int arr[])
{
    for (int i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    cout<<endl;
}

int main()
{
    printf("\nDhruv Goyal\n20104134\n");
    int arr[10];
    printf("\nEnter the list here: ");
    for(int i=0; i<10;i++)
        scanf("%d", &arr[i]);
    
    printf("list before sorting is: ");
    display(arr);
    selection_sort(arr);
    printf("List after sorting is: ");
    display(arr);

    return 0;
}