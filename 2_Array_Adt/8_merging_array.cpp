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

struct array* merge_(struct array* arr,struct array* brr)
{
    struct array* c = (struct array*)malloc(sizeof (struct array));
    int i =0, j=0, k=0;
    while(i<arr->length && j<brr->length)
    {
        if (arr->a[i]>brr->a[j])
        {
            c->a[k] = brr->a[j];
            j++;
            k++;
        }
        else
        {
            c->a[k] = arr->a[i];
            i++,k++;
        }
    }

    for(;i<arr->length; i++)
    {
        c->a[k] = arr->a[i];
        k++;
    }

    for (; j<brr->length; j++)
    {
        c->a[k] = brr->a[j];
        k++;
    }

    c->length = arr->length + brr->length;
    return c;
}

int main()
{
    struct array a = {{1,2,4,6,9},10,5};
    struct array b = {{3,5,6,8,11},10,5};
    struct array* c ;
    c = merge_(&a, &b);
    display(*c);
}