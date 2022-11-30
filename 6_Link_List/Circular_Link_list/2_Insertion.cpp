#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;

void create(int no)
{
    struct node* temp = head , *newnode;
    

    for(int i =0; i<no; i++)
    {
        newnode = (struct node*)malloc(sizeof (struct node));
        printf("Enter the number: ");
        int number;
        scanf("%d", &number);
        newnode ->data = number;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    newnode->next = head;
}

void traversal()
{
    struct node* temp = head;
    if(head == NULL)
    {
        return;
    }
    else
    {
        while(temp->next != head)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        printf("%d\n",temp->data);
    }
}

void insertion_at_beg()
{
    
}

int main()
{
    create(5);
    traversal();
}