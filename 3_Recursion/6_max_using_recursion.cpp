#include <iostream>
using namespace std;

int max_(int *pointer, int index)
{
    if(index == 5)
        return 0;
    else{
        int max = max_(pointer, index +1);
        if(max >*(pointer+index))
            return max;
        else
            return *(pointer +index);
    }
    /*
    time complecity = o(n)
    space complexity = o(n);
    */
}
int main()

{
    int arr[5] = {10, 20, 40, 50, 30};
    int max = max_(arr, 0);
    printf("%d", max);
    return 0;
}