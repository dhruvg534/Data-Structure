#include <iostream>
using namespace std;

void swap_(int *a, int* b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b = temp;
}

void bubble_sort(int arr[])
{
    for(int i=0;i<10-1;i++) // Represents pass
    {
        bool swap = false; // this is a flag if its zero after a pass then the no of swaps is zero 
        for(int j=0; j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap_(&arr[j], &arr[j+1]);
                swap = true;
            }
        }
        if (!swap) // if no swaps occured then the list is already sorted
            return;
    }
    return ;

    /*
    no of comparisons = n-1 + n-2 + n-3 +..............+1 = o(n2)
    no of swaps = n-1 + n-2 + n-3 +..............+1 = o(n2)

    bubble sort is stable in nature
    bubble sort is adaptive in nature (made it using thr flag swap)
    swap helps in improving the bubble sort and makes it adaptive in nature
    
    */

}

void display(int arr[])
{
    for(int i=0; i<10;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10];
    printf("\nEnter the list here: ");
    for(int i=0; i<10;i++)
        scanf("%d", &arr[i]);
    
    printf("list before sorting is: ");
    display(arr);
    bubble_sort(arr);
    printf("List after sorting is: ");
    display(arr);

    return 0;

}