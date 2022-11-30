// POINTERS


#include <iostream>
using namespace std;


int main(){
  int a =5;
  int *p; // pointer to a 
  char c; // declaration of a character
  char *p0; // pointer to character
  double b;  // declaration of double
  double *p1; // pointer to double 

  /*
  p  -> address stored in p
  *p -> gives the value stored at that address
  &a -> gives the address of the value 

  
  */
  p = &a;   // & gives the address of the variable a
  p0 = &c; 
  p0 = &c; 
  p1 = &b;




  printf("p is %d", p); //prints addres of 'a' stored in p
  cout<<endl;
  printf("a is %u", a); //prints value of a
  cout<<endl;
  printf("*p is %u", *p); // prints value of a 
  cout<<endl;
  printf("&a is %d", &a); // prints address of a 
  cout<<endl;
  printf("*(&a) is %u", *(&a)); // prints value of a 
  cout<<endl;


  *p = 12;  // referencing
  printf("a is %u", a); //prints value of a
  cout<<endl;

  int d =20;
  *p = d;
  printf("a is %u", a); //prints value of a
  cout<<endl;
  cout<<endl;
  
  cout<<endl;
  printf("p is %d", p); //prints addres of 'a' stored in p
  cout<<endl;
  printf("size of an int is %d", sizeof (int)); 
  cout<<endl;
  printf("p+1 is %d", p+1); 
  cout<<endl;
  printf("*(p+1) is %d", *(p+1)); //prints addres of 'a' stored in p
  cout<<endl;

  
  return 0;
}