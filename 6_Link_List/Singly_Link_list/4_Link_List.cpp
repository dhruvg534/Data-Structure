/*
Operations like 
{  
    searching
    sorting
    Maximum
    Minimum
    Successor
    Predecessor
}
*/

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
    struct node* newnode= head, *temp = head;
    if (no == 0)
        return;
    else
    {
        for(int i =0; i< no;i++)
        {
            newnode = (struct node*)malloc(sizeof (struct node));
            printf("Enter the Number: ");
            int number;
            scanf("%d", &number);
            newnode->data = number;

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
        newnode->next = NULL;
    }
    
}

void traversal()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    else
    {
        int i=1;
        cout<<endl;
        while(temp != NULL)
        {
            printf("%dth no is %d\n",i,temp->data);
            temp = temp->next;
            i++;
        }
    }
    //cout<<end;

}

void search(int number)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    else
    {
        int i = 1;
        while(temp != NULL)
        {
            if(temp->data ==  number)
            {
                printf("\n%d element in the list is %d\n",i,number);
                return;
            }
            else
            {
                temp= temp->next;
                i++;
            }
        }
        printf("\nElement not fount in the given list\n");
    }
    cout<<endl;
}

void maximum()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    else{
        int max=temp->data;
        while(temp!=NULL)
        {
            if(max < temp->data)
            {
                max = temp->data;
                temp = temp->next;
            }
            else{
                temp = temp->next;
            }
        }
        printf("\nThe maximum element present in the List is %d\n",max);
    }
    
}

void minimum()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    else{
        int min =temp->data;
        while(temp!=NULL)
        {
            if(min > temp->data)
            {
                min = temp->data;
                temp = temp->next;
            }
            else{
                temp = temp->next;
            }
        }
        printf("\nThe minimum element present in the List is %d\n",min);
    }
    
}

void successor(int number)
{
    struct node *temp = head;
    if(head == NULL)
    {
        return;
    }
    else
    {
        int difference = temp->data - number;
        while (temp!= NULL)
        {
            if(temp->data -number>0 )
            {
                if (difference <= temp->data-number)
                    difference = temp-> data - number;
                
            }
            temp = temp->next ;
        }
        printf("\nSuccessor of the %d is %d in the given list\n",number,number+difference);
    }
}
int main()
{
    create(5);
    traversal();
    search(3);
    maximum();
    minimum();
    successor(4);
    //predecessor();
}