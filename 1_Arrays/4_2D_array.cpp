/*
2D - arrays  - 2d array is an array of arrays

int a[i][j]; - declaration of 2d arrray
i-> no of rows
j-> no of columns

1 2 3 
4 5 6

it is mandatory to store the column
{    
    int a[][j] -> this is valid
    int a[i][] -> this is Invalid
`
    Declaration of 'a' as multidimensional array must have bounds for all dimensions except the first
}

a[10][20] == a[m][n]
a[lower bound of row: upper bound for row] [ lower bound of colm: upper bound of colm] == a[l1:u1][l2:u2]
no of rows = u1 -l1 +1
no of columns = u2-l2+1

total elements = m*n = (u1-l1+1)(u2-l2+1)

Initlization 
    {1,2,3,4,5,6}
    {{1,2,3},{4,5,6}}
    {}
}


Physical Implementation of 2d array in Memory:

Row-Major
{    first same row elements are to be stored in memory
    example 1 2 3 4 5 6

    How to access particular element in a 2d array in row major:

    a[1][1]
    let B=100
    size = 4 bytes

    then 
    a[1][1] = B + Size*(No of elements to be crossed)
    a[1][1] = 100 + 4*(1*3+1)

    a[m][n] =  a +size*(m*j + n)  this is for 2d array starting with index 0
}

Column Major
{    first same column elements are to be stored in memory
    example 1 4 2 5 3 6 


    How to access particular element in a 2d array in row major:

    a[1][1]
    let B=100
    size = 4 bytes

    a[1][1] = B + size*(No of elements to be crossed)
    a[1][1] = B + 4*( 2*1 + 1)

    a[m][n] = a + 4(i*n + m) this is for 2d array starting with index 0
}

Row major is preferred over column major because kshames for row are less compared to column
*/

#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {1,2,3,4,5,6} ;
    // printf("Enter the Elements: ");
    // for(int i =0 ; i<2; i++)
    // {
    //     for(int j =0; j <3; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }

    // traversal
    // for(int i =0 ; i<2; i++)
    // {
    //     for(int j =0; j <3; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     cout<<endl;
    // }

    // printf("\n%d\n",*(a[0] + 3));
    //printf("%d", &a[0][0]);
    int n,m;
    printf("sghv");
    scanf("%d, %d",m,n);

    printf("a[m][n] is %d\n",*(a[0]+m*3 +n));
}
