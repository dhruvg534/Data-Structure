#include<iostream>
using namespace std;

struct queue {
    int size;
    int front;
    int rear;
    int* q;
};

void create(struct queue* qu)
{
    qu->size = 20;
    qu->front = qu->rear =-1;
    qu->q = (int*)malloc(sizeof (int)*qu->size);
}

void enqueue(struct queue* qu, int x)
{
    if(qu->rear == qu->size-1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        qu->rear++;
        qu->q[qu->rear] = x;
    }
}

int dequeue(struct queue* qu)
{
    int x = -1;
    if(qu->rear == qu->front)
        printf("UNDERFLOW\n");
    else
    {
        qu->front++;
        x= qu->q[qu->front];
    }
    return x;
        
}

bool isempty_(struct queue qu)
{
    if(qu.front == qu.rear)
        return true;
    else
        return false;
}

bool isfull(struct queue qu)
{
    if(qu.rear = qu.size-1)
        return true;
    else
        return false;
}

void display(struct queue qu)
{
    if(qu.front == qu.rear)
        printf("EMPTY\n");
    else
    {
        for(int i = qu.front; i != qu.rear; )
        {
            i++;
            printf("%d\n", qu.q[i]);
        }
    }
}

int main()
{
    struct queue qu;
    create(&qu);
    enqueue(&qu, 5);
    enqueue(&qu,3);
    enqueue(&qu, 20);
    enqueue(&qu, 19);
    enqueue(&qu, 1);

    display(qu);
    printf("\n");
    cout<<isfull(qu)<<endl;
    printf("\n");
    dequeue(&qu);
    dequeue(&qu);
    dequeue(&qu);
    display(qu);
    printf("\n");
    dequeue(&qu);
    dequeue(&qu);
    display(qu);
    printf("\n");
    
}