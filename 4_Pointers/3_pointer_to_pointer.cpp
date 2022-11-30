// POINTERS to pointer


#include <iostream>
using namespace std;


int main(){

  int x=5;
  int*p =&x;
  *p =6;
  int ** q = &p;
  int ***r = &q;
  printf("x = %d", x);
  cout<<endl;
  printf("*p is %d", *p);// *p is 6
  cout<<endl;
  printf("**q is %d", **q); // **q is 6
  cout<<endl;
  printf("***r is %d", ***r); // ***r is 6
  cout<<endl;
  printf("Address of x is %d", p);
  cout<<endl;
  printf("Address of p is %d", &p);
  cout<<endl;
  printf("Address of q is %d",&q);
  cout<<endl;
  printf("value of r and value of q is %d, %d", r, q  );
  cout<<endl;
  printf("**r is %d", **r); // address of x will be printed
  cout<<endl;
  printf("*r is %d",*r); // address of p will be printed
  cout<<endl;
  printf(" ");

 // * gives the value strored at the address

  return 0;
}