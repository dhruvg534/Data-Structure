#include <iostream>
using namespace std;

int array[100]={0};

int factorial_(int n)
{
    if(n==0||n==1)
    {
        array[0] = array[0] = 1;
        return 1;
    }
    else if(array[n]!=0)
        return array[n];
    else{
        int ans = factorial_(n-1)*n;
        array[n] = ans;
        return ans;
    }
}

int combination2(int n, int r)
{
    if(r>=n||r<=0)
        return 1;
    else
        return combination2(n-1, r)+combination2(n-1, r-1);
}

int combination(int n, int r)
{
    int den = factorial_(r)*factorial_(n-r);
    return factorial_(n)/(den);
}

int main()
{
    for(int i=0;i<100;i++)
    {
        array[i] = 0;
    }
    printf("%d", combination2(17,3));
    return 0;
}