/*
implementation of stack using link list

we can either insert and pop from starting or from end 
o(n) -> time complexity for reaching and pushing/poping from end
o(1) -> time complexity for reaching and pushing/poping from start

hence we prefer to use it from starting 
*/
using namespace std;
#include <iostream>

struct node
{
    int data;
    struct node* next;
};

struct node* top = NULL, *newnode;

void push(int number)
{
    newnode = (struct node*)malloc(sizeof (struct node));
    newnode->data = number;

    if (top == NULL)
    {
        top = newnode;
        newnode->next = NULL;
    }
    else
    {
        newnode ->next = top;
        top = newnode;
    }

}

void pop()
{
    if (top == NULL)
    {
        printf("\nUnderflow\n");
        return;
    }
    else
    {
        struct node* temp = top;
        top = top->next;
        free(temp);
    }
    return;

}

void traversal() // display the stack
{
    if(top == NULL)
    {
        printf("\nEMPTY STACK\n");
        return;
    }
    else
    {
        struct node* temp = top;
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        return;
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("\nEmpty stack\n");
        return;
    }
    else
    {
        printf("top of the stack is %d\n", top->data);
        return;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    traversal();

    pop();
    peek();
    pop();
    pop();
    pop();
    peek();
    pop();
    pop();
    peek();
    traversal();

    return 0;
}




