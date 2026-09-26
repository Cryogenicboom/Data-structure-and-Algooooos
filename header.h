#ifndef HEADER
#define HEADER
#include <vector>
int binary_search(std::vector<int>& ordered_arr, int target, int& step_count);
void bubble_sort(std::vector<int>& unsorted_arr);
void selection_sort(std::vector<int>& unsorted_arr);
void insertion_sort(std::vector<int>& unsorted_arr);

#endif