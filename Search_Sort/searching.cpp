#include <iostream> 
#include <vector>

using namespace std;

/* 
when a function returns multiple things. 
pair<int, int> binary_search(vector<int>& ordered_arr, int target)
*/

int binary_search(vector<int>& ordered_arr, int target, int& step_count)
{
    /*
    Binary Search eliminates half the array in first step, and so on. therefore searching takes very less time
    Each time you double the data, the binary search algo adds one more step.
    Searching steps counted:
        1. count the middle element till one element remains, this starts with N/2.  
        2. Return the index of target. DONE
    */

    int lower_bound = 0;
    int upper_bound = ordered_arr.size() - 1;
    step_count++;
    int middle_bound = (lower_bound + upper_bound) / 2;
    
    while(ordered_arr[middle_bound] != target)
    {
        if(ordered_arr[middle_bound] > target)
        {
            upper_bound = middle_bound - 1;
            middle_bound = (lower_bound + upper_bound) / 2;
            step_count++;
            continue;
        }
        else if(ordered_arr[middle_bound] < target)
        {
            lower_bound = middle_bound + 1;
            middle_bound = (lower_bound + upper_bound) / 2;
            step_count++;
            continue;
        }
    }
    return middle_bound;
}
