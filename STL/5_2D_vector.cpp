#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec;
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2= {10,20,30,40,50, 60};

    vec.push_back(vec1);
    vec.push_back(vec2);

    //printing
    for(auto it: vec)
    {
        for(auto it1: it)
        {
            cout<<it1<<" ";
        }
        cout<<endl;
    }
    
    // define  a 10X20 vector


}