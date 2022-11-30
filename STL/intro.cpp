#include<bits/stdc++.h>
// this library is used in competetive programming only
// other wise in interviews we import specific libraries
//in cp we use this because it imports all the libraries and saves time
// but increases compile time

using namespace std;
// namespace is like a scope which stores all the fnx 
// and gives access to those functions
// to acess various elements we use double colon

// user defines data type
struct node
{

    int number;
    string str;
    char level;

    double percentage;

    //constructor
    node(string str_, int n, char X, double doub)
    {
        str = str_;
        number = n;
        level = X;
        percentage = doub;
    }
};

int main(){
    char x = 'a';
    struct node temp = node("Dhruv", 20104134, x, 91.0);
    //in interviews and competitiuve coding access 
    //user defined data type like this instead of accessing individual 
    //elements 
    
    //prints everything 
    cout<<temp.level<<" "<<endl;
    cout<<temp.number<<endl;
    cout<<temp.percentage<<endl;
    cout<<temp.str<<endl;
    return 0;

}



