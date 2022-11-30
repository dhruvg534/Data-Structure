/*
Reverse a linked list

In this we are going to reverse the link list

example- link list
head    5        6       1      7
100     200     150     300     0

Reversed Link list
5        6       1      7      head
0       100     200     150     300


*/
#include<iostream>
using namespace std;

// we defined our own data type here
struct node  
{
  int data;
  struct node * next; // this will point towards to the next node
};


//Traversal: this will traverse the entire LL in o(n) 
void traversal(struct node* pointer)
{
  if (pointer == NULL) // if head is 0 list is empty
  {
    printf("Empty list\n");
    return;
  }
  else
  {
    int num,i=1;
    while (pointer != 0)
    {
      
      num = pointer->data;
      printf("%dth no is %d\n",i,num);
      i++;
      pointer = pointer->next; // (*pointer).next == pointer->next

    }
    cout<<endl;
  }
}


// Create the link list of n nodes
struct node* create(int n) // this is one way to create link list
{
  struct node* head, *newnode,*temp; 
  head = NULL;

  if (n ==0)
  {
    return head;
  }

  // creates first node and enters first data in it
  newnode = (struct node*)malloc(sizeof (struct node));
  head = temp = newnode ;
  printf("Enter the number: ");
  int num;
  scanf("%d", &num);
  newnode->data = num;
  /* we did this because temp pointer should be one step behind newnode pointer
  just so it can access previous nodes next pointer area */

  for(int i=1; i<n;i++)
  {
    newnode = (struct node*)malloc(sizeof (struct node));
     //        (type casting)malloc(sizeof the variable)
    printf("Enter the number: ");
    scanf("%d", &num);
    newnode->data = num;  // number gets filled in data part of new node
    temp->next = newnode; // since temp points towards previous node so the next part of previous node is equal to the address of new node
    temp = newnode;  // temp is updated to the address of new node
  }
  temp->next = NULL;  // end node pointers towards nothing hence null 
  return head;
}

struct node* reverse(struct node* head)
{
    struct node *temp = head ;
    struct node *postnode = temp->next, *prenode = temp;
    while (postnode != NULL)
    {
        temp = postnode;
        
        postnode = temp->next;
        temp->next = prenode;
        prenode = temp;

    }

    head ->next = NULL;
    head = temp;

    return head;
}

void reverse_rec(struct node* head)
{
  if(head == NULL)
  {
    return;
  }
  else{
    reverse_rec(head->next);
    printf("%d\n",head->data);
    return;
  }
}


int main ()
{
    struct node* head;
    head = create(5);
    traversal(head);
    // there are 2 ways of reversing a list:
    // 1.recursion
    // 2.reversing the links

    reverse_rec(head);

    head = reverse(head);
    traversal(head);

    return 0;
}