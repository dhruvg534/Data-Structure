#include <iostream>
using namespace std;

int length(char array[])
{
    int count =0;
    while(array[count]!='\0')
    {
        count++;

    }
    return count;

}

int main()
{
    char array[20];
    gets(array);
    cout<<length(array)<<endl;
    return 0;
}