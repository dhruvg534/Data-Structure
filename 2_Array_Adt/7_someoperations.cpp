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

void insert_(struct array* arr, int num)
{
    int i =0, ind =0;
    for(i =arr->length-1 ; i>=0; i--)
    {
        if (num < arr->a[i]){
            arr->a[i+1] = arr->a[i];
            ind =i;
        }
        else
            break;
    }
    arr->a[ind] = num;
    arr->length ++;
    return;
}

bool is_sorted(struct array arr)
{
    for (int i =0; i<arr.length -1; i++)
    {
        if(arr.a[i]>arr.a[i+1])
            return false;
        
    }
    return true;
}

void neg_(struct array* arr)
{
    int i =0, j= arr->length -1;
    while(i < j)
    {
        while(arr->a[i]<0)
        {
            i++;
        }

        while(arr->a[j] >=0)
            j--;
        
        if( i<j)
        {
            int temp = arr->a[i];
            arr->a[i] = arr->a[j];
            arr->a[j] = temp;
        }
    }
}

int main()
{
    struct array arr = {{4,8,-13,16,-20,25,28,-33,39},10,9};
    display(arr);
    //insert_(&arr, 18);
    //display(arr);
    printf("\n%d the array is sorted",is_sorted(arr));
    neg_(&arr);
    display(arr);


    return 0;
}