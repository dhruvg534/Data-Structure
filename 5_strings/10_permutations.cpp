#include <iostream>
using namespace std;

void permutations_(string s, int start, int end)
{
    if(start == end )
    {
        cout<<s<<endl;
        return;
    }
    
    else{
        for(int i= start; i<end; i++)
        {
            swap(s[i], s[start]);
            permutations_(s, start+1, end);
            swap(s[i],s[start]);
        }
    }
}

int main(){
    string s = "abcd";
    int size = s.size();
    permutations_(s, 0, size);
    
    return 0;

}