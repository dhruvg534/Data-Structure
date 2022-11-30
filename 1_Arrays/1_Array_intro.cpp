/*arrays in data structures

Arrays is a collection of information of same type example int, float, char, etc stored at contigious memory locations
[1,2,3,4,5] -> valid
[a,s,d,f,g] -> valid
[a,s,1,2,3] -> invalid

<data type> name[size]  example: int arr[10] , char arr[5] etc

Declaration  {
  int a[5]; 
  int a[5] = {1,2,3,4,5};
  int a[] = {1,2,3,4,5}
  but not int n, a[n]; this will be invalid

  once we declare an array we can not change its size at run time.
} 

Initalization  {
  int a[5] = {1,2,3,4,5};
  int a[] = {1,2,3,4,5}
}

Accessing {
  access a particular element : array_name[index];
}       

Accessing particular element in an array
{
  No of elements in an array = [upper bound - lower bound +1]
  start index of array  = lower bound 
  end index of array = upper bound

  hence a[i] = Base + (size of element)*(index -lower bound)
}

Random acess = constant time = o(1)

1d array
2d array
multi dimensional array

we can make a dynamic array in heap memory using malloc or new function
Static and Dynamic array

  static - size of array is decided at compile time
  dynamic - size is decided at run time -> it is made in heap memory
*/

#include <iostream>
using namespace std;

int main(){
  int a[5];
  int b[] = {1,2,3,4,5};
  int c[5] = {1,2};
  //int n, d[n];    invalid 

  char e[5] = {'j','k','a','s','d'};
  a[0] = 6 ;
  printf("%d", a[0]);
  cout<<endl;
  printf("%d %d %d %d %d", b[0], b[1],b[2],b[3],b[4] );
  cout<<endl;
  printf("%d", c[0]);
  cout<<endl;
  printf("%c", e[3]);
  cout<<endl;

  int t[5];

  for (int i =0;i<5;i++){
    printf("enter the no: ");
    scanf("%d", &t[i]);
    
  }

  /*
  
  */
  return 0;
}