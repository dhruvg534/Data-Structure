// character arrays and pointers

#include <iostream>
using namespace std;
#include <string.h> /// gives string manipulation options

/*
How to store strings 
  size of array >= no of characters in string +1

rule :- a string in c is expected to be null terminated so every in built function works accordingly
*/

void print(int* c){
  while (*c != '\0'){
    printf("%c",*c);
    c++;

  }
  printf("\n");
}
int main(){
  char c[10];
  c[0] ='j';
  c[1] ='o';
  c[2] ='h';
  c[3] ='n';

  printf("%s",c); // here some garbage value mighte be printed behind 'john' because we didn,t included null
  cout<<endl;

  c[4] ='\0';
  printf("%s", c);
  cout<<endl;

  int len = strlen(c);
  printf("length = %d",len);
  cout<<endl;

  char s[20]= "asdf";
  // s = "qwerty";  cannot modify string
  printf("length of: %u", strlen(s));
  cout<<endl;
  return 0;
  
  
}