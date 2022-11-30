// Array as function argument


#include <iostream>
using namespace std;

void display(int *p,int n){
  for (int i=0; i<n;i++){
    printf("the %dth element is: %d",i+1 ,*p);
    cout<<endl;
    printf("the address of the element is %x", p);
    p ++;
    cout<<endl;
  }
}

void Double(int a[],int size){
  for (int i =0; i<size; i++){
    a[i] = 2*a[i];
  }
}

int sum_of_elements(int* a,int size){
  int i,sum=0;
  for (i=0; i<size; i++){
    sum = sum+a[i];

  }
  return sum;
}
int main(){
  int a[5]= {8,2,3,4,5};
  int *p = &a[0];
  int size_of_array = sizeof(a)/sizeof(a[0]);
  display(p,size_of_array);
  cout<<endl;
  cout<<endl;
  printf("sum of array is: %d",sum_of_elements(a, size_of_array));
  cout<<endl;
  cout<<endl;
  Double(a,size_of_array); // array a is not passed a s argument but pointer to first element of a is passed
  display(p,size_of_array);


  return 0;
}