#include <iostream>

struct array
{
    int * a;
    int size;
    int length;
};

void display_( struct array arr)
{
    int i =0;
    printf("\nElements are\n");
    for (i=0 ; i< arr.length; i++)
        printf("%d ",*(arr.a +i));
    return ;
}


int main()
{
    struct array arr;
    printf("Enter the size of an array: ");
    scanf("%d",& arr.size);
    arr.a = (int*)malloc(arr.size*sizeof  (int));
    arr.length =0;

    // this is how the array is produced in heap
    int n;
    printf("Enter the no of Elements: ");
    scanf("%d",&n);

    arr.length = n;
    printf("Enter the numbers: ");
    for(int i =0 ; i< arr.length; i++)
    {
        scanf("%d", &arr.a[i]);
    }


    display_(arr);
    return 0;
}