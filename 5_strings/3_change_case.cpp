#include <iostream>
using namespace std;

void lower_case(char * arr)
{
    int i=0;
    while(*(arr+i)!='\0')
    {
        if(*(arr+i)>=65 && *(arr+i)<=90)
            *(arr+i) += 32;
        i++;
    }

}

void upper_case(char* arr)
{
    int i=0;
    while(*(arr+i)!='\0' )
    {
        if(*(arr+i)>=97 && *(arr+i)<=122)
            *(arr+i)-= 32;
        i++;
    }
}

int main()
{
    char array[20];
    gets(array);
    lower_case(array);
    cout<<array<<endl;
    upper_case(array);
    cout<<array<<endl;

    return 0;
}