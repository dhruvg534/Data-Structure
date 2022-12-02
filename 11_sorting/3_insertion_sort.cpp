#include<iostream>
using namespace std;
#include<vector>

void swap_(int*a , int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(vector<int> *arr)
{
    if(arr->size() == 0)
        return;
    else
    {
        int temp;
        for(int i=1; i<arr->size();i++)
        {
            temp = arr->at(i);
            int j= i-1;
            while(arr->at(j) > temp && j>=0)
            {
                swap_(&(arr->at(j)), &(arr->at(j+1)));
                j--;
            }

            arr->at(j) = temp;
            



        }
    }
}

int main()
{
    vector<int> arr={10,30,22,12,56,3,2,1,9};
    insertion_sort(&arr);
    for(auto it = arr.begin(); it!= arr.end(); it++)
    {
        cout<<*it<<endl;
    }
}