#include <iostream> 
#include <vector>
#include <string>

using namespace std;

/*
Use recursion to write a function that accepts an array of strings and
returns the total number of characters across all the strings. For example,
if the input array is ["ab", "c", "def", "ghij"], the output should be 10 since there
are 10 characters in total.
*/

int chars_count(vector<string>& array, int idx)
{
    if(idx == (array.size() - 1))
    {
        return array[idx].length();
    }
    return array[idx].length() + chars_count(array, idx+1);
}

/*
Use recursion to write a function that accepts an array of numbers and
returns a new array containing just the even numbers.
*/

vector<int> return_even(vector<int>& array, vector<int>& even_arr, int& idx, int& j)
{
    if( j >= array.size() -1 )
    {
        return even_arr;
    }
    else if(array[j] % 2 == 0)
    {
        even_arr[idx] = array[j];
        idx++;
    }
    j++;
    return return_even(array, even_arr, idx, j);
}

int main()
{
    vector<int> array = {2, 3, 5, 6, 7, 8, 9, 11, 12};
    vector<int> even_arr;
    int idx = 0;
    int j = 0; 
    return_even(array, even_arr, idx, j);

    for(int i = 0; i < even_arr.size(); i++)
    {
        cout<<even_arr[i]<<endl;
    }
    return 0;
}