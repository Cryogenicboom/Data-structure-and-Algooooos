#include <iostream> 
#include <vector>

using namespace std;

/*
Write a function that returns the intersection of two arrays. The intersection is a third array that contains all values contained within the first two
arrays. For example, the intersection of [1, 2, 3, 4, 5] and [0, 2, 4, 6, 8] is [2, 4].
Your function should have a complexity of O(N). (If your programming
language has a built-in way of doing this, don’t use it. The idea is to build
the algorithm yourself.)
*/

int intersection(vector<int> a1, vector<int> a2)
{
    vector<int> larger_arr;
    vector<int> smaller_arr;
    int hashtable = {};

    if(a1.size() > a2.size())
    {
        larger_arr = a1;
        smaller_arr = a2;
    }
    else
    {
        larger_arr = a2;
        smaller_arr = a1;
    }

    for(int i = 0; i < larger_arr.size(); i++)
    {
        hashtable[i] = true;
    }
}