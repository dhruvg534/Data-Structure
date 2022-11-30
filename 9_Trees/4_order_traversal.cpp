/*
BINARY TREE TRAVERSALS

INORDER - left root right
PREORDER - root left right
POSTORDER - left right root

             a
      b            c
  d           e          f
                g     h    i

INORDER TRAVERSAL IS - B D A G E C H F I
PREORDER TRAVERSAL IS - A B D C E G F H I
POST ORDER TRAVERSAL IS - D B G E H I F C A
*/

# include <iostream>
using namespace std;

// define my own data type
struct node
{
    int data;
    struct node* left,*right;
};


// create the function that creats the tree
struct node * create()
{
    struct node *newnode;
    int x;
    newnode = (struct node*) malloc(sizeof (struct node));
    printf("Do u wish to create a node: ");
    scanf("%d",&x);

    if (x == false)
        return NULL;

    printf("Enter the data: ");
    scanf("%d",&x);

    newnode-> data = x;
    printf("\nEnter the left child of %d\n",x);
    newnode-> left = create();
    printf("\nEnter the right child of %d\n",x);
    newnode-> right = create();

    return newnode;
}


// inorder traversal to display stuff of tree in order - left root right
void inorder_traversal(struct node* root)
{
    if (root ==NULL)
    {       
        return ;
    }
    inorder_traversal(root->left);
    printf("%d ",root->data);
    inorder_traversal(root->right);
}


// preorder traversal to display stuff of tree in order - root left right 
void preorder_traversal(struct node*root)
{
    if(root== NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

// postorder traversal to display stuff of tree in order - left right root
void postorder_traversal(struct node*root)
{
    if (root == NULL)
        return ;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct node* root = create();
    cout<<endl;
    cout<<"Inorder traversal is ";
    inorder_traversal(root);
    cout<<endl;
    cout<<"preorder traversal is ";
    preorder_traversal(root);
    cout<<endl;
    cout<<"postorder traversal is ";
    postorder_traversal(root);
}

/*
Construct a BINARY TREE from preorder and inorder

*/