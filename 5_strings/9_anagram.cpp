#include <iostream>
using namespace std;

bool anagram(char arr1[], char arr2[])
{
    int word1[26] = {0};
    int word2[26] = {0};
    int i=0,j=0;
    while(arr1[i]!='\0')
    {
        word1[arr1[i]-97 ]+=1;
        i++;
    }

    while(arr2[j]!='\0')
    {
        word1[arr2[j]-97 ]-=1;
        if(word1[arr2[j]-97 ] <0)
            return false;
        j++;
        printf("\nfuck\n");
    }

    if(i!=j)
        return false;

    else
    {
        i=0;
        for(;i<26;i++)
        {
            if(word1[i] != 0)
                return false;
        }
    }

    return true;
    /*
    time complexity =o(n)
    space complexity = o(n)
    */
}

int main()
{
    char array1[20];
    gets(array1);
    char array2[20];
    gets(array2);

    bool ana = anagram(array1, array2);
    cout<<ana<<endl;

    return 0;
}