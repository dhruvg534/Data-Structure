/*
Pointer always store address (hexadecimal number) of the variable
%p is used as data type specifier

p = &b -> valid
p = b -> Invalid


*/
#include <iostream>
using namespace std;


int main()
{
    int b=10;
    int a=5;
    int*p;
    // p =&b;
    *p = b;
    //p=b; -> invalid
    *p = a;
    a=7;
    printf("%d\n",b);
    printf("%d\n",*p);
    printf("%p\n%p",p, &a);


}