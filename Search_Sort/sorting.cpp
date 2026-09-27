#include <iostream> 
#include <vector>

using namespace std;

/* 
when a function returns multiple things. 
pair<int, int> binary_search(vector<int>& ordered_arr, int target)
*/

void bubble_sort(vector<int>& unsorted_arr)
{
    int len = unsorted_arr.size();
    bool sorted = false;

    while(!sorted)
    {
        sorted = true;
        for(int i = 0; i < len-1; i++)
        {
            if(unsorted_arr[i] > unsorted_arr[i+1])
            {
                swap(unsorted_arr[i], unsorted_arr[i+1]);
                sorted = false;
            }
        }
        len--;
    }
}

void selection_sort(vector<int>& unsorted_arr)
{
    int idx = 0; 
    int small = 0; 

    for(int start = 0; start < unsorted_arr.size(); start++)
    {
        small = unsorted_arr[start];

        for(int idx = 1; idx < unsorted_arr.size(); idx++)
        {
            if(unsorted_arr[idx] < small)
            {
                small = idx;
            }
        }     
        if(unsorted_arr[start] != unsorted_arr[small])
        {
            int temp = unsorted_arr[start];
            unsorted_arr[start] = unsorted_arr[small];
            unsorted_arr[small] = temp;
        }
    }

    for(int i = 0; i < unsorted_arr.size(); i++)
    {
        cout<<unsorted_arr[i]<<", ";
    }
    cout<<endl;
}

void insertion_sort(vector<int>& unsorted_arr)
{
    for(int idx = 1; idx < unsorted_arr.size(); idx++ )
    {
        int temp_var = unsorted_arr[idx];
        int position = idx-1;

        while(position >= 0)
        {
            if(unsorted_arr[position] > temp_var)
            {
                unsorted_arr[position+1] = unsorted_arr[position];
                position--;
            }
            else
            {
                break;
            }
        }
        unsorted_arr[position+1] = temp_var;
    }

    for(int i = 0; i < unsorted_arr.size(); i++)
    {
        cout<<unsorted_arr[i]<<", ";
    }
}