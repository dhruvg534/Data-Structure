#include <iostream>
using namespace std;

int power_(int x, int power)
{
    if(power == 1)
    {
        return x;
    }

    int ans = power_(x, power/2);
    if(power%2 ==0)
        return ans*ans;
    else    
        return ans*ans*x;
}

int array[100]={1};


int factorial_(int  n)
{
    if(n==0||n==1)
    {
        array[0] =1;
        array[1] = 1;
        
        return 1;
    }
       
    else if(array[n] !=0)
        return array[n];
    else
    {
        int ans = factorial_(n-1)*n;
        array[n] = ans;
        return ans;

    }
}

float taylor_series(int x, int elements)
{
    if (x==0)
        return 1;
    
    float ans=1;
    for(int i=1;i<=elements;i++)
    {
        ans+= float(power_(x, i)/factorial_(i));
        cout<<ans<<endl;
    }
    return ans;
}

int main()
{
    printf("%f", taylor_series(3,20));
    return 0;
}