/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
            return 0;
        int res=1;
        set<int>s;
        for(int i=0; i<n; i++)
        {
            s.insert(nums[i]);
        }
        auto prev = s.begin();
        int p = *prev;
        int length = 1;
        for(auto x : s)
        {
            if(p == x)
                continue;
            else if(x == p+1)
            {
                length++;
            }
            else
                length = 1;
            res = max(res, length);
            p = x;
        }
        return res;
    }
};

int main()
{
   return 0;
}
