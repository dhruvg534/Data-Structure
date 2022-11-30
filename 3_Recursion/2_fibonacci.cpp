#include<iostream>
using namespace std;

int array[100]={0};

int fibonaci_(int n)
{
    if(n==1||n==0)
    {
        array[0]=1;
        array[1]=1;
        return 1;
    }
    else if(array[n]!=0)
        return array[n];
    else
    {
        int ans = fibonaci_(n-1)+fibonaci_(n-2);
        array[n] = ans;
        return ans;
    }
}

int main()
{
    printf("%d", fibonaci_(7));
    return 0;
}