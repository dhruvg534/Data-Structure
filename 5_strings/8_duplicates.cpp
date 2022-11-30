/*
There are 3 ways of checking duplicates in a string 
1. comparing a element with the rest of the list
2. using hashtable or counting 
3. using bits

*/


#include <iostream>
using namespace std;

//method -1
bool duplicate1(char arr[])
{
    bool duplicate =false;
    for(int i=0; arr[i]!='\0'; i++)
    {
        for(int j=i+1; arr[j] != '\0'; j++)
        {
            if(arr[i] == arr[j] && arr[i] !=0)
            {
                duplicate = true;
                arr[j] = 0;
            }

        }
    }
    return duplicate;
    /*
    time complexity = O(n2);
    */
}

//method-2
/*
In this we created an array of 26 words
we increament the value of each element by 1 corresponding to there alphabetic order
and after going through entire string we check the array of words for value greater then 1
if there are values greater then one then there are duplicates else no duplicates
*/
bool duplicate2(char arr[])
{
    
    int word[26]={0};
    for(int i=0; arr[i] !='\0'; i++)
    {
        if(arr[i]>=97 && arr[i]<=122)
            word[arr[i] -97] +=1;
        
    }

    for(int i=0; i<26;i++)
    {
        cout<<i<<"  "<<word[i]<<endl;
        if(word[i]> 1)
            return true;

    }

    return false;
    /*
    time complexity of this is o(n)
    space complexity is also o(n)
    */

}

//method 3, using bits
/*
bit wise operations
1. shift left 
2. ending 
3. merging
*/
bool duplicate3(char arr[])
{

}


int main()
{
    char word1[20];
    gets(word1);
    cout <<duplicate2(word1)<<endl;
    return 0;
}