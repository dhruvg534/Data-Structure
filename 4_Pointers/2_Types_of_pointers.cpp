//Types of  POINTERS


#include <iostream>
using namespace std;


int main(){

  int a = 1025;
  int *p;
  p = &a;
  printf("address = %d , value = %d\n", p,*p);
  cout<<endl;

  char *p0;
  p0 = (char *)p; // exclusive type casting
  printf("address = %d , value = %d\n", p0,*p0);  
  // *p0 = 1, because 1025 in binary is 
  // 1025 = 00000000 00000000 00000100 00000001 
  cout<<endl;

  // void pointer -> generic pointer
  void *p2;
  p2 = p;
  //printf("address = %d , value = %d\n", p2,*p2);
  
  // this gives compilation error because we can not derefere void pointer
  cout<<endl;

  return 0;


}