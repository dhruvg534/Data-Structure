/*operations on arrays in data structures
 Creation
 traversal
 insertion
 deletion
 searching
 sorting

*/

#include <iostream>
using namespace std;



/* Traversal
Pseudocode
{
  loop(int i =0; i<size)
    print the element(a[i])
    i++
}
*/
void print(int* p, int size){
  // time complexity for the given code is o(n)
  for(int j=0;j<size;j++){
    printf("%dth element is: %d\n", j+1,*(p+j));
  }
}

/*
Insertion
  now in c++ we have to take care of overflow condition so we have to put a check to see if there is a overflow condition and deal with it
  
  time complexity for insertion at beginning is o(n)
  time complexity for insert at position is o(n-p)
  time complexity for insertion at end is o(1)

*/

void insertion_at_pos(int* a, int num, int pos,int size ){
  //time complexity for insert at position is o(n-p)
  /*
  Psudocode
  {
    if pos is invalid(pos > length +1 or pos<0) print invalid
    else if arrray is full then print overflow
    else 
      loop (pos < length)
        i[len] = i[len-1]
        len--;
      
        
  }
  */
  if (pos < 0 ){
    printf("Invalid Position\n");
    return;
  }

  if(pos > size+1){
    printf("Invalid Position\n");
    return;
  }
  else{
    for(;pos <= size; size--){
      a[size] = a[size-1];
    }
    a[size] = num;
  }
}

void insertion_at_beginning(int* a,int num, int size){
  // time complexity for insertion at beginning is o(n)
  // because we would have to copy entire array one forward to insert an element in beginning 
  for( ; size>0 ; size-- ){
    a[size] = a[size-1];
  }

  a[size] = num;
}

/*
Pseudo code for insertion in the beginning
{
  if len == max size then print Overflow
  else len = len+1
  loop (len>0)
   arr[len] = arr[len-1]
   len--
  arr[0] = num;

}
*/

void insertion_at_end(int* a,int num, int size){
  // time complexity for insertion at end is o(1)
  a[size ] = num;
}

/*
Deletion 
  we would have to place a check for underflow andcheck if the position entered is valid

  time complexity to delete any element from position is o(n-p)

*/

int deletion_at_pos(int* a, int pos, int size){
  if (size == 0){
    printf("Underflow\n");
    return 0;
  }
  if(pos<0 || pos > size){
    printf("Invalid position\n");
    return 0;
  }
  else{
    int num = a[pos-1];
    for (;pos< size; pos ++){
      a[pos -1] = a[pos];
    }
    a[pos] = '\0';
    return num;
  }
}

int deletion_at_beg(int* a, int size){
  if(size ==0){
    printf("Underflow\n");
    return 0;
  }
  else
  {
    int num = a[0];
    for(int i=0; i<size-1;i++)
    {
      a[i] = a[i+1];
    }
    return num;

  }
}

int deletion_at_end(int* a, int size){
  if (size == 0){
    printf("Underflow\n");
    return 0;
  }
  else
  {
    int num = a[size-1];
    a[size-1] = 0;
    return num;
  }
}

// main function 
int main(){
  //Creation 
  int size, a[50]; //50 is the maximum size of arrays
  // time complexity for the creation of an array is o(1)


  printf("enter the size of array: \n");
  scanf("%d",&size);

  // to take input of array
  printf("Enter elements of array: \n");
  for(int i;i <size; i++){
    scanf("%d",&a[i]);
  }

  // Traversal
  print(a,size); // using function we printed everything
  cout<<endl;
  cout<<endl;

  // Insertion
  insertion_at_pos(a, 10,3,size);
  size ++;
  //print(a,size); // traversal
  cout<<endl;

  cout<<endl;
  insertion_at_beginning(a, 12,size);
  size ++;
  //print(a,size); // traversal
  cout<<endl;

  cout<<endl;
  insertion_at_end(a, 14,size);
  size ++;
  print(a,size);// traversal
  cout<<endl;

  // Deletion
  int num;
  printf("Enter the posititon from no to be deleted: ");
  scanf("%d",&num);
  
  num = deletion_at_pos(a,num,size);
  size--;
  printf("the No deleted is %d\n",num);

  num = deletion_at_beg(a,size);
  size--;
  printf("the No deleted is %d\n",num);

  num = deletion_at_end(a,size);
  size--;
  printf("the No deleted is %d\n",num);

  cout<<endl;
  cout<<endl;
  print(a,size);// traversal
  return 0;
}