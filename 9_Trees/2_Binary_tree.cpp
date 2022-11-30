/*
Binary Tree 
{   
    Only 2 children are present on every node
    each node can have atmost 2 children
}

{
    Representation have 3 parts in a node:- 
        left - stores pointer to left part of left
        right - stores pointer to right part of tree
        and data
    
}

{
    Properties of binary tree
        maximun no of nodes possible at level l is 2**l
        total no of nodes of height h is 2**0 + 2**1 + 2**2 + -----+2**n = 2**(h+1) -1
        minimum no of nodes after height h are h+1
        min height of a binary tree( means every  node has 2 children) = (log2(n+1)) -1
        maximum height of a binary tree (each node has exactly one children) = n-1
}

(
    Types of binary tree
    1. full/proper/strict bt
        each node have either 0 or 2 children (or) each node will have 2 nods except leaf node
        -> no of leaf node = no of internal node +1
        -> maximum no of nodes = 2**(h+1)
        -> minimum no of nodes = 2*h +1
        -> min height of the full binary tree = (log2(n+1)) -1
        -> max height of the full binary tree = (n-1)/2

    2. complete binary tree
        all levels are completely filled except last level and the last level has nodes as left as possible
        -> maximum no of nodes = 2**(h+1)
        -> minimum no of nodes = 2**h
        -> min height of the complete binary tree = (log2(n+1)) -1
        -> man height of the complete binary tree = (log2(n)) 

    3. perfect binary tree
        all internal nodes have 2 children and all leaves are at same level
        -> all the perfect bt are complete and full bt

    4. degenerate binary tree
        all nodes have only one child

)
*/

// BINARY TREE IMPLEMENTATION

#include <iostream>
using namespace std;

// define my own data type
struct node
{
    int data;
    struct node* left ,*right;
};

struct queue {

    int size;
    int front;
    int rear;
    struct node** q;
};

void createqueue(struct queue *qu)
{
    qu->size = 20;
    qu->front=-1;
    qu->rear =-1;
    qu->q = (struct node**)malloc(sizeof (struct node*)* qu->size);

}

void enqueue(struct queue* qu, struct node* x)
{
    if(qu-> rear == qu->size-1)
        return;
    else
    {
        qu->rear++;
        qu->q[qu->rear] = x;
    }
        
}

struct node* dequeue(struct queue* qu)
{
    if(qu->front == qu->rear)
        return NULL;
    else
    {
        qu->front++;
        struct node* temp = qu->q[qu->front];
        return (temp);

    }
}


bool isempty(struct queue qu)
{
    if(qu.front == qu.rear)
        return true;
    else
        return false;

}

struct node* create_binary(){
    struct node* p, *temp;
    struct queue qu;
    createqueue(&qu);
    struct node* root;
    root = (struct node*)malloc(sizeof (struct node));
    root->left = root->right = NULL;
    printf("Enter the root value: ");
    scanf("%d", &(root->data));
    enqueue(&qu, root);
    while(!isempty(qu))
    {
        int x;
        p=dequeue(&qu);
        printf("Enter left child: ");
        scanf("%d", &x);
        if(x!=-1)
        {
            temp= (struct node*)malloc(sizeof (struct node));
            temp->data = x;
            temp->right = temp->left =NULL;
            p->left = temp;
            enqueue(&qu , temp);


        }
        printf("ENTER RIGHT CHILD: ");
        scanf("%d", &x);
        if(x!= -1)
        {
            temp=(struct node*)malloc(sizeof (struct node));
            temp->data = x;
            temp->right = temp->left =NULL;
            p->right = temp;
            enqueue(&qu, temp);
        }

        
    }
    return root;

}

void traversal(struct node* root)
{
    if(root!= NULL)
    {
        traversal(root->left);
        printf("%d ", root->data);
        traversal(root->right);
    }

}

struct node* create_binary_2(int x)
{
    struct node* root = (struct node*)malloc(sizeof (struct node));
    root->data =x;
    printf("Enter data for left node: ");
    scanf("%d", &x);
    if(x!=-1)
        root->left = create_binary_2(x);
    else
        root->left = NULL;
    
    printf("Enter data for right node: ");
    scanf("%d", &x);
    if(x!=-1)
        root->right = create_binary_2(x);
    else
        root->left = NULL;
    return root;

}

// main fnx
int main()
{
    // create a fnx which return pointer to the head;
    struct node* root= create_binary_2(5);
    traversal(root);


    return 0;
}