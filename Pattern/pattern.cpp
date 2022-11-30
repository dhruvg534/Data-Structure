#include<iostream>
using namespace std;

void pattern1(int n)
{
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }

    /*
    time complexity =o(n2)
    space complexity = o(1)
    */
}

void pattern1_(int n)
{
    if(n==0)
        return ;
    pattern1_(n-1);
    for(int i=0; i<n;i++)
    {
        printf("* ");

    }
    printf("\n");
    /*
    time complexity = o(n2)
    space complexity = o(n)
    */
}



void pattern2_(int n)
{
    if(n==0)
        return ;
    for(int i=0; i<n; i++)
    {
        printf("* ");

    }
    printf("\n");
    pattern2_(n-1);
    return ;
    /*
    time complexity =o(n2)
    space complexity = o(n)
    */
}

void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i; j<=n; j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<i; j++)
        {
            printf("  ");
        }
        for(int j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


int main(){
    
    pattern4(5);
}