/*
Tower of hanoi

at one time a single disk can be moved
a bigger disk cannot be placed on a smaller disk
*/

#include <iostream>
using namespace std;

void hanoi_tower(int n, char source = 'A' ,char destination ='C', char user = 'B')// a c b
{
    if(n) // think of this using euler recursion
    {
        hanoi_tower(n-1, source , user, destination);
        printf("%d| from %c to %c\n",n, source, destination);
        hanoi_tower(n-1, user ,destination, source);
    }
    return;
    /*
    time complexity of this fnx is 2 raised to power n
    space complexity = n
    */
}

int main()
{
    cout<<endl;
    hanoi_tower(3);
    return 0;
}