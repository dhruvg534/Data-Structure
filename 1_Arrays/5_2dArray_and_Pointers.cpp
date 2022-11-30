/*

*/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {6,2,5,0,1,3,4,9,8};
    /*
    the matrix is 

    6 2 5  -> a[0]
    0 1 3  -> a[1]
    4 9 8  -> a[2]

    */
    int *p ;
    // p = a is not valid in multidimensional arrays
    p = a[0]; // -> this is valid because a[0] is an array so a[0] will point towards the first element of the array
    p = &a[0][0]; // -> here & is necessary because a[0][0] gives error

    

}