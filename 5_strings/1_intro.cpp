#include <iostream>
using namespace std;

/*

for english language 1 byte is used for each character and asci code is saved in the code
asci codes are used in the strings
A-Z has codes  from 65-90
a-z has codes from 97-122

for other language 2 bytes are used and unicode is allocated to corresponding character
unicode.org can be visited to find code for various languages

*/


int main()
{
    char temp;
    temp ='a';// it must be in single quiotes
    // temp=a;
    // temp="a";
    // temp= 'ab';
    // these 3 are wrong formats

    char name[10] = {'j','o','h','n','\0'};
    //character array is a string ->set of characters
    //end of a string is marked with null value or string terminater
    //so for 4 characyer string we need an array of 5 size
    //
    //char *n = "john";// initalization in heap memory
    printf("%s", name);
    scanf("%s", &name); // this will add \0 in the end by itself
    // scanf read only first word of the string

    gets(name); // this reads the entire string or all the words unlike scanf
    printf("%s", name);
    return 0;



}