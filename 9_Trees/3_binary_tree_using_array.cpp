/*
ARRAY REPRESENTATION OF BINARY TREE (SEQUENTIAL REPRESENTATION)

this representation is valid if its a complete binary tree else its not held

arrays are filled from left to right 

Case-1 -> indexing start at 0
{
    if a node is at ith index 
        left child = 2*i +1
        right child = 2*i +2
        parent would be at floor value((i-1)/2)
}

case-2 -> indexing start at 1
{
    if a node is at ith index 
        left child = 2*i
        right child = 2*i+1
        parent = floor value(i/2)
}

This wastes a lot of space 
*/

#include <iostream>
using namespace std;

