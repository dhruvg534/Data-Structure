#include <iostream>
using namespace std;

bool comparing(char string1[], char string2[])
{
    for(int i=0; string1[i]!='\0'&& string2[i] !='\0' ; i++)
    {
        if(string1[i] != string2[i])
            return false;
        
    }
    return true;
}

//

/*
palindrome is something which spells same on reversing 
to find wheather a string is a palindrome or not
1. reverse
2. comparing 
*/

void reverse_(char *a, char *b)
{
    int i=0, j=0;
    while(*(a+i)!='\0')
        i++;
    i--;
    while(*(a+j)!='\0')
    {
        *(b+j) = *(a+i);
        i--;
        j++;
    }
}

int main()
{
    char word1[20];
    gets(word1);
    char word2[20];
    reverse_(word1, word2);
    cout <<comparing(word1,word2)<<endl;
    return 0;
}