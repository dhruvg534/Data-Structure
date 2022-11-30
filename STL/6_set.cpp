#include <bits/stdc++.h>
using namespace std ;
//#include <sets>

// Sets are containers that store unique elements following a specific order.
/*
    values in set cannot be modified but they can be inserted or removed.
    Sets are implemented using BST (binary search tree).
    in sets we cannot access the elements with st[0] or st[1] etc. 
    But we can access it with st.begin()+i.



*/

int main()
{
    set<int> st;
    int n=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    // set only store unique elements in weak ascending order.
    //st = {1,2,3,4,5,6,7,8,9}

    //ITERATORS
    st.begin(); // begin gives pointer to the first element in set

    st.erase(st.begin()); // erases the element whose pointer is given as parameter
    st.end();// returns iterator to element next to end;
    st.rbegin(); // returns iterator to the last element
    st.rend();// returns iterator to one element before beginning 

    //CAPACITY
    cout<<st.empty()<<endl;//empty returns bool 
    cout<<st.size()<<endl;
    cout<<st.max_size()<<endl;

    // MODIFIERS
    st.insert(9);//takes val as parameter ans adds it to the set
    st.erase(st.begin());// takes an iterator as input
    // time complexity of erase os logn
    //s2.swap(st1); this swaps out the elements of s1 with s2 and 
    // elements of s2 with s1; this can also be obtained with swap(s1, s2)
    cout<<st.size()<<endl;
    st.clear();// this will clear the entire set
    cout<<st.size()<<endl;
    st.emplace(9);// emplace is same as insert 
    //emplace is faster then insert so we prefer emplace 

    // OPERATIONS
    st.find(4); //gives iterator to the element 
    st.count(4); //this returns the no of times that element 
    // occurs but in set one can occur only once so it gives 1 or
    // 0 as output in sets
    st.lower_bound(); //returns iterator to the lower bound
    st.upper_bound(); //returns iterator to the upper bound
    



}