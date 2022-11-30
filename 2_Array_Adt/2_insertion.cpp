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

void append( struct array *arr, int num)
{
    if (arr->length >= arr->size)
    {
        printf("Overflow");
        return;
    }
    else
    {
        arr->a[arr->length] = num;
        arr->length++;    
    }
}

void insert(struct array *arr, int num, int index)
{
    if(index >0 && index <= arr->length)
    {
        for(int i = arr->length; i>index; i--)
        {
            arr->a[i] = arr->a[i-1];

        }
        arr->a[index]= num;
        arr->length ++;
    }
    else{
        printf("Invalid pos");
    }
}


int main()
{
    struct array arr = {{1,2,3,4,5},10,5};
    display(arr);

    // we will have to pass array by pointer becuase we want to create changes in the original array
    append(&arr,10);
    display(arr);
    insert(&arr,11,3);
    display(arr);
}