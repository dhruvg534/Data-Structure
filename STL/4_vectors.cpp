#include <bits/stdc++.h>
using namespace std;

// #include <vector>
/*
10^6 ->maX SIZE OF local array and vector 
10^7 -> max size of global array or vector
*/

int main(){
    // initalization
    vector<int> arr1 = {1,2,3,4,54,67};
    vector<int> vec1(10, 1); // {1 1 1 1 1 1 1 1 1 1 1}
    vector<int> vec2(12, 6); // {6 6 6 6 6 6 6 6 6 6 6 6 6}

    // size, capacity of an vector //
    cout<<arr1.size()<<endl;// this gives the no of elements in the vector

    cout<<arr1.max_size()<<endl;
    // this gives the maximum elements which can be stored without 
    // getting reallocated

    arr1.resize(4); // this functions is 1 indexed 
    // this resize the array to the given argument 
    cout<<arr1.size()<<endl;
    // prints the vector
    for(auto it = arr1.begin(); it!= arr1.end(); it++)
    {
        cout<<*it<<"   ";
    }cout<<endl;

    cout<<arr1.capacity()<<endl;
    // gives the maximum elements which were stored 
    
    if(!arr1.empty()) // empty tests wheather the vector is empty or not
    //returns a boolean
    {
        cout<<"array is not empty"<<endl;
    }

    // access the elements// 
    // arr1.at(index) is same as arr1[index]
    //be careful about the index for [] operator 
    cout<<arr1.front()<<endl; // accesses first element
    cout<<arr1.back()<<endl; // accesses last element
    // random iterators -> o[1]

    // iterators
    arr1.data() ;// gives pointer to the first element of the vector 
    arr1.begin();// gives an iterator to the starting index
    arr1.end(); // gives an iterator next to the last element 
    arr1.rbegin();// gives the iterator to the last element 
    arr1.rend(); // gives an iterator to the element before the starting of the vector 
    
    // insertions and deletion 
    // insertion/deletion at the end -> o[1]
    //insertion / deletion at the pos-> o[n] linear 
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    //push_back adds elements at the back of the vector
    cout<<endl<<endl;
    for(auto it = arr1.begin(); it!= arr1.end(); it++)
    {
        cout<<*it<<"   ";
    }
    cout<<endl<<endl;

    // emplace_back is faster then pushback so preffer this
    vec2.emplace(vec2.begin()+3, 14);
    // this function is zero indexed
    // adds value at 1+given position

    vec2.emplace_back(30);
    for(auto it = vec2.begin(); it!= vec2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    // swapping//
    
    for(auto it = vec1.begin(); it!= vec1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = vec2.begin(); it!= vec2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    swap(vec1, vec2);// or vec1.swap(vec2) or vec2.swap(vec1);
    // all 3 functions do the same task 
    cout<< "vector after swap is: "<<endl;
    for(auto it = vec1.begin(); it!= vec1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it = vec2.begin(); it!= vec2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    vec1.clear(); // deleted all the elements of the vector
    cout<<vec1.size()<<endl;
    for(auto it = vec1.begin(); it!= vec1.end(); it++)
    {
        cout<<*it<<" ";
    }
    

    return 0;

}