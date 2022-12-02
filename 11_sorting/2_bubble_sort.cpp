#include<iostream>
#include<vector>
using namespace std;

/*we will solve this suing bubble sort*/

void swap_(int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(vector<int> *arr)
{
    if((*arr).size() == 0)
        return ;
    else{
        bool flag = false;
        for(int i=0; i<arr->size()-1; i++)
        {
            for(int j=0; j<arr->size()-i-1; j++)
            {
                if(arr->at(j)> arr->at(j+1)){
                    swap_(&(arr->at(j)), &(arr->at(j+1)));
                    flag = true;
                }
            }

            if (flag == false) // optimisation of bubble sort
                return;
            
            // cout<<arr->at(arr->size()-i-1)<<endl;
        }
        // cout<<arr->at(0)<<endl;

    }

    /*
    no of passes = o(n-1)
    no of comparisons = o(n2)
    no of swaps = o(n2)

    time complexity 
        for best case - o(n)
        for worst case - o(n2)
    space complexity - o(1)
    */
}

int main()
{
    vector<int> arr={10,30,22,12,56,3,2,1,9};
    bubble_sort(&arr);
    for(auto it = arr.begin(); it!= arr.end(); it++)
    {
        cout<<*it<<endl;
    }
}