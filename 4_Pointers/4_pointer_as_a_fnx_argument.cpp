// POINTERS as function argument- call by reference 


#include <iostream>
using namespace std;
void increment1(int a){
  a =a+1; // local variable 
}
void increment2(int *a){
  *a =*a +1; // this id referencing to the global variable

}

int main(){
  int a=5;   // global/static variable
  int*p = &a;
  increment1(a); // variable pass by copy
  printf("a after using variable as argument: %d",a);
  cout<<endl;
  increment2(p); // poinnters pass by reference
  printf("a after using pointer as argument: %d",a);


  return 0;
}