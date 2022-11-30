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

void swap_(int *x, int*y)
{
    int temp = *x;
    *x= *y;
    *y= temp;
    return;
}

int linear_search(struct array *arr, int key)
{
    for(int i =0 ; i<arr->length; i++)
    {
        if(key == arr->a[i])
        {
            swap_(&arr->a[i], &arr->a[0]);
            return i;
        }
    }
    return -1;
}


int binary_search(struct array arr , int left ,int right, int key)
{
    int mid =0;
    while(left < right)
    {
        mid = (left+right)/2;
        if(key == arr.a[mid])
        {
            return mid;
        }
        else if(key > arr.a[mid])
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }

    }
    return mid;
    // if(left >right)
    //     return -1;

    // int mid = ((left+right)/2);

    // if (key == arr.a[mid])
    // {
    //     printf("%d mid\n", 1);
    //     return mid;
    // }

    // else if (key > arr.a[mid])
    // {
    //     left = mid +1;
    //     printf("%d left\n", 2);
    //     return ( binary_search(arr,left,right, key));
    // }

    // else{
    //     right = mid -1;
    //     printf("%d right\n", 3);
    //     return (binary_search(arr, left,right,key));
    // }
    
}

int main()
{
    struct array arr = {{1,2,3,4,5,6,7,8},20,8};
    display(arr);

    // searching -> linear , binary search
    //linear search
    int index = linear_search(&arr,5);
    printf("\n%d is the index of 5",index);
    index = linear_search(&arr,5);
    printf("\n%d is the index of 5",index);


    int x = binary_search(arr,0,7,5);
    printf("\n%d is the index of 5",x);

}