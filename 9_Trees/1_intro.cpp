/*
TREES 

1. non linear data structure
2. hierachical data structure
3. we can only move from top(root) to bottom or, links are unidirectional

|               a
|            b         c
|         d  e  f    g  h


root-> top most element or node without parent example a
node-> contains info and address of next nodes 
parent node-> when a  node points towards nodes which are its immediate predecessor example a or b or c
child node-> immediate of parent nodeexample b,c or d,e,f etc
leaf node-> node without any child , also known as external nodes example d,e,f,g,h
non leaf node-> nodes with atleast one child , also known as internal nodes.
ancestor-> any predecessor node on the path fron root to that node example a,c are ancestors of h or g
decedant-> any successor node on  the path from that node to leaf node  example b,d,e,f,c,g,h are decedant of a
sibling-> children of same parent example b and c
degree-> no of childrem example degree of a is 2, degree of b is 3
degree of tree-> maximum degree of any node in the entire tree is called degree of tree examplde 3 is the degree of above tree
depth-> no of edges from root to that node example depth of b is 1, depth of d is 2
height-> path to leaf node from that node is called height exapmle height is 0 for e, height of a is 2.

we implement binary tree 
*/

