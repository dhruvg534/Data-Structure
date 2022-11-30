# include <iostream>
using namespace std;

void vowels_and_cons(char arr[], int* vowels, int * cons,  int * words)
{
    for(int i=0;arr[i]!= '\0'; i++)
    {
        if((arr[i]>=65 && arr[i]<=90)||(arr[i]>=97 && arr[i]<=122))
        {
            if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U')
                *vowels +=1;
            else
                *cons+=1;
            
        }
        if(arr[i]==' '&& arr[i-1]!=' ') // multiple spaces is know as white spaces and we have to deal with it
            *words +=1;
    }
    return;
}

int main()
{
    char word[20];
    gets(word);
    int vowels=0, cons=0, words=1;
    vowels_and_cons(word, &vowels,&cons,&words);
    cout<<vowels<<endl<<cons<<endl<<words;
    return 0;
}