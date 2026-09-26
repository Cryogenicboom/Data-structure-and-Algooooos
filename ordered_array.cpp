#include <iostream> 
#include <vector>
#include "header.h"

using namespace std;


int main()
{
    vector<int> array  = {23, 45, 1, 43, 6, 80, 2, 15};
    // int step_count = 0;

    // int result = binary_search(array, 8, step_count);
    // cout<<"Target index found: "<<result<<endl;
    // cout<<"No. of steps taken = "<<step_count<<endl;

    // bubble_sort(array);
    // cout<<endl;
    // for(int i = 0; i < array.size(); i++)
    // {
    //     cout<<array[i]<<" ,";
    // }
    // cout<<endl;

    insertion_sort(array);
    return 0;
}