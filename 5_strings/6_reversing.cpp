#include <iostream>
using namespace std;

void swap_(char* a, char* b)
{
    char temp;
    temp =*a;
    *a = *b;
    *b=temp;

}

void reverse_(char arr[])
{
    int i = 0;
    while(arr[i]!='\0')
    {
        i++;
    }

    i--;
    for(int j=0;j<i;j++)
    {
        swap(arr[i], arr[j]);
        i--;
    }
}

int main()
{
    char word[20];
    gets(word);
    reverse_(word);
    int i=0; 
    while(word[i]!='\0')
    {
        cout<<word[i]<<endl;
        i++;
    }
    return 0;
}