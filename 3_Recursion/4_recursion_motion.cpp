#include<iostream>
using namespace std;

void recursion_beforehand(int n)
{
    if (n)
    {
        printf("%d ",n);
        recursion_beforehand(n-1);
    }
    return;
    //output is 7 6 5 4 3 2 1 
    //in this statements are first printed and the recursion is called
}

void recursion_afterwards(int n)
{
    if(n)
    {
        recursion_afterwards(n-1);
        printf("%d ",n);
    }
    //output is 1 2 3 4 5 6 7
    // in this recursion is first called and then printed
}

int main(){
    recursion_beforehand(7);//7 6 5 4 3 2 1 
    cout<<endl;
    recursion_afterwards(7);//1 2 3 4 5 6 7 
    return 0;
}