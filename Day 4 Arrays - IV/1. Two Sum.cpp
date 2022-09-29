/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>s;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(target - nums[i]) != s.end())
            {
                ans.push_back(s[target-nums[i]]);
                ans.push_back(i);
            }
            else
            {
                s[nums[i]] = i;
            }
        }
        return ans;
    }
};

int main()
{
   return 0;
}
