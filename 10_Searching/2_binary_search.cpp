/*
BINARY SEARCH  -> divide and conquer technique

1 2 3 4 5 6 7 8 9
l               r

calculate 'mid'
mid = (l+r)/2 -> floor value

mid = 4

1 2 3 4 5 6 7 8 9
l       m       r

now if key >arr[mid] then reject left part of array
else reject right part of the array 
*/

#include <iostream>
using namespace std;

int Binary_search(int* a, int n, int key)
{
    int left  =0, right =n-1,mid = 0;
    while (left <= right)
    {
        mid = (left +right )/2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            right = mid-1;
        }
        else
        {
            left = mid +1;
        }
    }
    return -1;
}

int main ()
{
    int a[] ={1,2,3,4,5};
    int ans = Binary_search(a, 5, 5);
    printf("%d",ans);
}