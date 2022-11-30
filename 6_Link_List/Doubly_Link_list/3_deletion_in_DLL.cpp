#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head;

void create(int no)
{
    if (no == 0)
    {
        return ;
    }

    struct node* newnode, *temp;
    for(int i =0; i<no; i++)
    {
        newnode = (struct node*)malloc(sizeof (struct node));
        printf("Enter the number: ");
        int number;
        scanf("%d",& number);
        newnode->data =number;
        if (head == NULL)
        {
            head = temp =newnode;
            head->prev = NULL;
        }
        else
        {
            temp-> next = newnode; 
            newnode->prev = temp;
            temp = newnode;

        }

    }
    newnode->next = NULL;
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

void Deletion_at_beg()
{
    if(head == NULL)
    {
        printf("\nUnderflow\n");
        return;
    }
    
    struct node* temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void Deletion_at_end()
{
    
    struct node *temp = head,*pointer = head;
    if (head == NULL)
    {
        printf("\nUnderflow\n");
        return;
    }
    
    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    else
    {
        while(temp->next != NULL)
        {
            pointer = temp;
            temp = temp->next;
        }
        pointer->next = NULL;
        free (temp);
        return;
    }
}

void deletion_at_pos(int pos)
{
    struct node *temp = head, *pointer = head;
    if (head == NULL)
    {
        printf("\nUnderflow\n");
        return ;
    }
    else
    {
        for(int i=1;i<pos-1 ; i++)
        {
            pointer = temp;
            temp = temp->next;
        }
        pointer ->next = temp->next;
        pointer = temp->next;
        pointer->prev = temp ->prev;
        free(temp);
    }
}

int main()
{
    create(5);
    printf("\nCreation of doubly link list\n");
    traversal();

    printf("\nDeletion\n");
    Deletion_at_beg();
    traversal();
    Deletion_at_end();
    traversal();
    deletion_at_pos(3);
    traversal();
    
}
