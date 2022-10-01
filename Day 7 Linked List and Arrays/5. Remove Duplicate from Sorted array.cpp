/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0, j=1;
        while(j<arr.size())
        {
            if(arr[i] != arr[j])
            {
                i++;
                swap(arr[i], arr[j]);
            }
            j++;
        }
        return i+1;
    }
};

int main()
{
    return 0;
}
