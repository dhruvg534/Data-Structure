/*
we are not supposed to balance out this tree

Construct bst using preorder  
{
    example 
    preorder - 20,16,5,18,17,19,60,85,70 (root left right )

    from preorder find inorder (its ascending order)
    inorder - 5,16,17,18,19,20,60,70,85

    and now construct binary tree from preorder and inorder
                   20
            16              60
        5       18              85
            (17      19)     70
}

Construct bst using postorder 
{
    example
    postorder - 5,17,19,18,16,70,85,60,20 (left right root)

    from postorder find in order (its ascending order)
    inorder - 5,16,17,18,19,20,60,70,85

    and now construct binary tree from postorder and inorder

    Answer-
                   20
            16              60
        5       18              85
            (17     19)     70
}
*/

#include <iostream>
using namespace std;

