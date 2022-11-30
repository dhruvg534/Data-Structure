# include <iostream>

struct array{
    int a[20];
    int size;
    int length;
};

int get_(struct array arr, int index)
{
    if(index <0 || index >= arr.length)
        return -1;
    return(arr.a[index]);
}

void set_(struct array * arr, int index, int num)
{
    if(index <0 || index >= arr->length)
        return ;
    arr->a[index] = num;
}

int max_(struct array arr)
{
    int max = arr.a[0];
    for(int i=0;i<arr.length; i++)
    {
        if(arr.a[i]> max)
            max = arr.a[i];
        
    }
    return max;
}

int min_(struct array arr)
{
    int min = arr.a[0];
    for(int i =0; i < arr.length ; i++)
    {
        if (arr.a[i] < min)
            min = arr.a[i];
        
    }
    return min;
}

int sum_(struct array arr)
{
    int total =0;
    for(int i =0; i<arr.length; i++)
    {
        total = total + arr.a[i];
    }
    return total;
}

float average_(struct array arr)
{
    int total = sum_(arr);
    return((float)total/arr.length);
}

int main()
{
    struct array arr = {{9,4,6,5,8,1,6},10,7};
    printf("\nget function : %d ", get_(arr,3));
    set_(&arr,3,5);
    printf("\nget function : %d ", get_(arr,3));
    printf("\n%d is the max of given array", max_(arr));
    printf("\n%d is the min of given array", min_(arr));
    
    printf("\n%f is the average of given array", average_(arr));


}