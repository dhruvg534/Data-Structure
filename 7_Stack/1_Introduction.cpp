/*
Stack is a linear data structure,
 which collects similar data structures with Limited access is possible 
stack is a container which follows a rule,
 that insertion and deletion is possible only on one end 
Example cd stack, plates stacked over one another

Implementation of stack is possible using 
    1. Arrays
    2. Linked List

LIFO - last in first out
or 
FILO - first in last out

Operations
    push(x) - inserts at the top of the stack
    pop() - deletes top of the stack
    peek()/top() - gives top of the stack without deleting it 
    isempty() - return true if stack is empty else false
    isfull() - return true if the stack is full else false 
    search - searches for the no in the code
    traverse - 
    sort - 

Application:
    1. reverse a string or a world
    2. for undo mechanism for text editor
    3. Recursion / Function call
    4. to keep in check the balance of paranthesis
    5. Infix to Postfix or Prefix conversion
    6. Tower of hanoi
    7. tree traversal
    8. evaluation of postfix

*/

#include <iostream>
using namespace std;

// we need to define global variable top
#define N 5 //
int stack[N];
int top = -1;

void push_1()
{
    int x =0;
    printf("Enter the Number to be pushed on to the stack: ");
    scanf("%d", &x);

    if ( top == N-1 )
    {
        printf("\nOverflow\n");
        return;
    }

    else
    {
        top++;
        stack[top] = x;
        return;
    }
}

void push_2(int x)
{
    if ( top == N-1 )
    {
        printf("\nOverflow\n");
        return;
    }
    else
    {
        top ++;
        stack[top] = x;
        return;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nUnderflown\n");
        return;
    }
    else
    {
        printf("the pop item is %d\n", stack[top]);
        top--;
        return;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\nEmpty stack\n");
        return;
    }

    else
    {
        int num = stack[top];
        printf("Top of the stack is: %d\n", num);
        return;
    }
}

void display()
{
    printf("The stack is\n");
    for(int top_2 = top; top_2>-1 ; top_2--)
    {
        printf("%d\n", stack[top_2]);
    }
    return;
}

void display_2()
{
    printf("\nThe stack is\n");
    for(int i = 0;i<=top; i++)
    {
        printf("%d\n", stack[i]);
    }
    return;
}
int main()
{
    push_1();
    push_2(2);
    push_2(9);
    push_2(4);
    push_2(6);
    push_2(4);
    push_2(8);
    pop();
    peek();
    display();
    display_2();

}