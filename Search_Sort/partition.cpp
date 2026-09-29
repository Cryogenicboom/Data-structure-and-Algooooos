#include <iostream> 
#include <vector>

using namespace std;

int partition(vector<int>& array, int left_ptr, int right_ptr)
{
    int pivot_idx = right_ptr;
    int pivot = array[pivot_idx];

    right_ptr--;

    int temp;

    while(true)
    {
        while(array[left_ptr] < pivot)
        {
            left_ptr++;
        }
        while(array[right_ptr] > pivot)
        {
            right_ptr--;
        }

        if(left_ptr >= right_ptr)
        {
            break;
        }
        else
        {
            temp = array[left_ptr];
            array[left_ptr] = array[right_ptr];
            array[right_ptr] = temp;
            left_ptr++;
        }
        temp = array[left_ptr];
        array[left_ptr] = array[pivot];
        array[pivot] = temp;

        return left_ptr;
    }
}