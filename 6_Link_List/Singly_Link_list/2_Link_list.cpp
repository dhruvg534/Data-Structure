/*
Length of Link list
*/


#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* create(int num)
{
    struct node* head = NULL;
    if (num <= 0)
    {
        return NULL;
    }
    struct node* newnode,*temp;
    for (int i=0; i<num; i++)
    {
        newnode = (struct node*)malloc(sizeof (struct node*));
        int data = 1;
        //printf("Enter the data");
        //scanf("%d", data);

        if(head == NULL)
        {
            head = temp = newnode;
            head->data = data;

        } 
        else
        {
            temp->next = newnode;
            newnode->data = data;
            temp = newnode;

        }
    }
    newnode->next = NULL;
    return head;
}

void traversal(struct node* head)
{
    int i = 1;
    while(head != NULL)
    {
        printf("%dth element is %d\n", i , head->data);
        head = head ->next;
        i++;
    }
}

int Length(struct node *pointer)
{
    int len=1;
    if (pointer = NULL)
    {
        printf("Empty List");
        return 0;
    }
    else
    {
        while(pointer != NULL)
        {
            pointer = pointer->next;
            
            len ++;
        }
    }
    printf ("length of the link list is %d\n", len);
    return len;
}

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    struct node *head;
    head = create(5);
    //traversal(head);
    printf("the head is %d\n",head);

    Length(head);
    printf("the head is %d\n",head);


}

