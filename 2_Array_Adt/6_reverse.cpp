# include <iostream>

struct array{
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

void swap_(int *x, int*y)
{
    int temp = *x;
    *x= *y;
    *y= temp;
    return;
}

void reverse_1(struct array* arr)
{
    int *b = (int *) malloc(arr->length * sizeof(int));
    for(int i =0, j= arr->length-1; i< arr->length; i++,j--)
    {
        b[i] = arr->a[j];
    }
    
    for(int i =0; i<arr->length;i++)
    {
        arr->a[i] = b[i];
    }
    return;
}

void reverse_2(struct array *arr)
{
    for(int i =0, j=arr->length-1; i <j; i++,j-- )
    {
        swap_(&arr->a[i], &arr->a[j]);
    }
    return;
}

int main()
{
    struct array arr = {{9,4,6,5,8,1,6},10,7};
    display(arr);
    reverse_1(&arr);
    display(arr);
    reverse_2(&arr);
    display(arr);
}