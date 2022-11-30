#include <iostream>

struct array
{
    int a[20];
    int size;
    int length;

};

void display(struct array arr)
{
    if(arr.length == 0)
        printf("\nEmpty array\n");
    else
    {
        printf("\nElements are: ");
        for (int i =0; i< arr.length; i++)
            printf("%d ", arr.a[i]);
    }
    printf("\n");
}

void delete_(struct array* arr, int index)
{
    if(index >= 0 && index< arr->length)
    {
        printf("%d is removed from the array\n",arr->a[index-1]);
        for(int i = index; i<arr->length; i++)
            arr->a[i-1] = arr->a[i];
    }
    arr->length--;
}

int main()
{
    struct array arr = {{1,2,3,4,5},10,5};
    display(arr);
    delete_(&arr,3);
    display(arr);
}