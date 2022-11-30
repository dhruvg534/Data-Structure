/*
This is just a modification of singly link list. 
In this we have 3 parts -1 data and 2 pointers which point towards previous and next node

Advantages:
    1. we can transverse in forward and backward direction
    2. we can traverse in both direction if address of anynode is known 
    3. Insertion and Deletion is easy compared to singly link list

Diadvantages:
    1. This takes bigger memory allocations
*/

#include <iostream>
using namespace std;

struct node 
{
    int data;
    struct node* prev;
    struct node* next;
};

struct node *head = NULL;

void create(int n)
{
    struct node * newnode,* temp;
    head = NULL;

    if (n == 0)
    {
        return ;
    }
    for (int i =0; i<n; i++)
    {
        newnode = (struct node*)malloc(sizeof (struct node));
        printf("Enter the no: ");
        int no;
        scanf("%d", &no);
        if (head == NULL)
        {
            head = temp  = newnode;
            newnode -> data = no;
            newnode -> prev = NULL;
        }
        else
        {
            temp ->next = newnode;
            newnode->prev = temp;
            newnode->data = no;
            temp = newnode;
        }
    }
    newnode -> next = NULL;
}

void traversal(struct node * head)
{
    struct node *temp = head;
    int i =1;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return ;
    }
    while (temp != NULL)
    {
        printf("%dth element is %d\n",i,temp->data);
        temp = temp ->next;
        i++;
    }
}



int main()
{
    create(5);
    traversal(head);
}