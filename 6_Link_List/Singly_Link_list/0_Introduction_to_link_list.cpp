/* LINK LIST

link list is a linear data structure which is alloted noconsecutive memory
in heap and not in stack and some extra space is required in node to 
store the pointer to other node.

link list is of dynamic size


start points towards the starting of the link list
next part stores address of the next node and data stores information


operations on link list:
traversal   sequential access -> o(n) time complexity
insertions  (easier then array)
deletions   (easier then array)
search      (binary search is not possible only linear)
reversal 


Types of Link List:
1. Singly Link List
2. Doubly Link List
3. Circular Link List
4. Doubly Circular Link List

Singly Link List:
  As the name suggests only one link is present only forward traversal is 
  possible no backtracking
  

  struct node // define our own type of data type
  {
    int data;
    struct node* next;  // (type of data to be stored)* name; example int* p , float* p, char* p etc
  };

Doubly Link list:
  2 pointers (links) are present in the node one to next node other to the 
  previous node
  reversal can be performed
  struct node 
  {
    int data;
    struct node* left; // saves address to previous node
    struct node* right; // saves address to next node
  }

Circular Link List:
  variation of singly link list, in last node we store address of 
  first node rather then null.
  reversal is not possible

Doubly Circular link list:
  variation of doubly link list, in last node's right we store address of 
  first node and in first node's left we store address of last node
  reversal can be carried out

Arrays vs Linked list

operation:                             Arrays:              Linked list:

1. cost of accessing the element        o(1)                   o(n)
2. Memory Utilization                not efficient          Efficient
3. Memory requirement              arrays require less memory compared to link list
4. Insertion:
      insertion at beg                   o(n)                   o(1)
      insertion at pos                   o(n-p)                 o(p)
      insertion at end                   o(1)                   o(n)
5. Deletion:   same as insertion
6. Easy to use                       array is easier to use compared to link list
7. Search                           linear, binary search     linear


*/


#include <iostream>
using namespace std;

struct node // define our own type of data type
{
  int data;
  struct node* next;  // (type of data to be stored)* name; example int* p , float* p, char* p etc
};

int main()
{
  return 0;
}
