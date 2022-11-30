#include <iostream>
using namespace std;
#include <array> // imports functions of arrays

int main()
{
    array<int, 5> arr; // array initalization
    /*
    arrays are initalized with all the elemnents as 0 in global scope
    but ion local scope they pics up garbage values
    */

   arr.fill(5);
   // fills the entire array with 5 
   arr[3] = 3;
   for(int i=0; i<5; i++)
   {
        cout<< arr[i] <<" ";
   }
    cout<<endl<<endl;

    cout<<"size is "<< arr.size()<<endl;
    printf("%d %d\n", arr.front(), arr.at(0));
    printf("%d %d \n", arr.back(), arr.at(arr.size()-2));
    return 0;
    
}