// pointers and 2d arrays

#include <iostream>
using namespace std;
#include <string.h> /// gives string manipulation options

int main(){

  int b[2][3] = {2,3,6,4,5,8};
  //b[0]
  //b[1]  are now 1d arrays of 3 integers

  // int* p =b; wrong 
  int (*p)[3] = b;
  printf("1 is %u\n", b); // b or b[0]
  printf("2 is %u\n", b[0]); // *b or b[0] or &b[0][0]
  printf("3 is %u\n", b +1); //  +1 adds 12 bytes to b, this is same as b[1]
  printf("4 is %u\n", *(b+1)); // *(b+1) or b[1] or &b[1][0]
  printf("5 is %u\n", *(b+1) +2); // b[1] +2 or &b[1][2]
  printf("6 is %u\n", *(*b+1)); // b[0][1]
/*
b[i][j] = *(b[i]+j) = *(*(b=i)+j)

*/

}