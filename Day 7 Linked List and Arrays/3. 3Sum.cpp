/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            int sum = -1*nums[i];
            int front = i+1, back = nums.size()-1;
            while(front < back)
            {
                if(nums[front] + nums[back] > sum)
                {
                    back--;
                }
                else if(nums[front] + nums[back] < sum)
                {
                    front++;
                }
                else
                {
                    int k = nums[front], l = nums[back];
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[front]);
                    v.push_back(nums[back]);
                    while(front<back && nums[front] == k)
                        front++;
                    while(front < back && nums[back] == l)
                        back--;
                    ans.push_back(v);
                }
            }
            while(i+1 < nums.size() && nums[i] == nums[i+1])
            {
                i++;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}
