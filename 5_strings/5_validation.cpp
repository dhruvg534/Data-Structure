#include <iostream>
using namespace std;

bool validation(char *word)
{
    for(int i=0; *(word+i)!='\0'; i++)
    {
        if(!(*(word+i)>=65 &&*(word+i)<=90)&& !(*(word+i)>=97 &&*(word+i)<=122)&& !(*(word+i)>=48 &&*(word+i)<=57))
            return false;
        
    }
    return true;
}

int main()
{
    char word[20];
    gets(word);
    bool val = validation(word);
    cout<<endl<<val<<endl;
    return 0;
}