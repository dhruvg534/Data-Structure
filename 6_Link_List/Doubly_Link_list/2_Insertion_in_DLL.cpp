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

void traversal()
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
    cout<<endl;
    cout<<endl;

}

void insertion_at_beg(int number)
{
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = number;
    head->prev = newnode;
    newnode->next = head ;
    newnode->prev = NULL;
    head = newnode;
}

void insertion_at_end(int number)
{
    struct node * newnode, *temp = head;
    newnode = (struct node *)malloc(sizeof (struct node));
    newnode->data = number;
    while(temp ->next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newnode;
    newnode->prev = temp;
    newnode -> next = NULL;

}

void insertion_at_pos(int number, int pos)
{
    struct node * newnode, *temp = head;
    newnode = (struct node*)malloc(sizeof (struct node));
    newnode -> data = number;
    for(int i=1;i < pos -1 ;i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode ->next;
    temp->prev  = newnode;
}

int main()
{
    
    create(5);
    printf("\nCreation of Doubly Link List\n");
    traversal();

    printf("\nINSERTION\n");
    insertion_at_beg(6);
    insertion_at_end(7);
    insertion_at_pos(9,3);
    traversal();
}