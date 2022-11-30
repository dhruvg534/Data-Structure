/*
Queue is a linear data structure
ADT (Abstract Data Type)
    FIFO - First in first out
    example: a line at  movie theater

    LILO - Last in last out

Rule:- 
{
    Insertion is performed at the rear end - ENQUEUE
    Deletion is performed at the starting  - DEQUEUE
}

operations
{
    Enqueue(x)
    Dequeue
    front/peek - gives the element at the front of the queue
    isfull() - tells wheather the queue is full or not
    isempty() - returns true if the queue is full
}

Application
{
    1. When multiple pcs give command to printers they save the command in a queue. Similarlly in Processor
    2. 
}

Implementation
{
    1. a queue can be implemented using arrays
    2. a queue can be implemented using linked list
}
*/


//Implementation of queue using arrays
#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front =-1;
int rear = -1;

void enqueue(int number)
{
    if (rear>= N-1)
    {
        printf("\nOverflow\n");
        return;
    }
    else{
        if (front == -1&&rear == -1)
        {
            front = rear = 0;
            queue[0] = number;
        }
        else{
            rear++;
            queue[rear]= number;

        }
    }
    return;
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nUNDERFLOW\n");
        return ;
    }
    else{
        if (rear == front)
        {
            front = rear = -1;
        }
        else{
            front++ ;
        }
    }
}

void traversal()
{
    
    int temp = front,i = 1;
    while(temp != rear)
    {
        if(temp == -1)
        {
            printf("\nEmpty queue\n");
            return;
        }
        printf("%dth no is %d\n",i,queue[temp]);
        temp ++;
        i++;
    }
    if (front == -1 && rear == -1)
    {
        printf("\nEmpty queue\n");
        return;
    }
    else
    {
        printf("%dth no is %d\n",i,queue[temp]);
        return;
    }
    
}

void peek()
{
   if(front == -1 && rear == -1)
   {
       printf("\nEMPTY QUEUE\n");
       return;
   } 
   else
   {
       printf("\nFront of the queue is %d\n",queue[front]);
       return;
   }
}

void isfull()
{
    if(front == 0 && rear == N-1)
    {
        printf("\nTrue, The queue is full\n");
        return;
    }
    else
    {
        printf("\nFalse, The queue is not full\n");
        return;
    }
}

void isempty()
{
    if(front == -1 && rear == -1)
    {
        printf("\nTrue, The Queue is Empty\n");
        return;
    }
    else
    {
        printf("\nFalse, The Queue is Not Empty\n");
        return;
    }
}
int main()
{
    isempty();
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(9);
    isfull();
    isempty();
    peek();
    traversal();
    dequeue();
    dequeue();
    peek();
    traversal();
    dequeue();
    dequeue();
    dequeue();
    isfull();
    isempty();
    peek();
    traversal();
    isempty();
}
