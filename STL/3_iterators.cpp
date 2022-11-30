#include <bits/stdc++.h>
using namespace std;

/* start 0 1 2 3 4 5 6 7 8 9 end;
   iterators-> begin( ), end(), rbegin(), rend()
   
   begin gives the iterator to the oth position
   end gives the iterator to the element next to the ending element
   rbegin points towards the last element in the array or container
   rend points to the element just before the starting element 

*/

int main()
{
    array<int, 3> arr = {10,30, 40};
    for(auto it = arr.begin(); it !=arr.end(); it++)
    {
        cout<< *it<<" ";
    }


    // for loop using reverse iterators 
    cout<<endl<<endl<<endl;
    for(auto it = arr.rbegin(); it!= arr.rend(); it++)
    {
        cout<<*it<<" ";
    }

    
    return 0;
}