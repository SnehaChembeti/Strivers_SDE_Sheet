/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>answer;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int front = j+1;
                int back = n-1;
                long res = long(target)-long(nums[i]+nums[j]);
                while(front < back)
                {
                    int two = nums[front]+nums[back];
                    if(two > res)
                        back--;
                    else if(two < res)
                        front++;
                    else
                    {
                        int k = nums[front], l = nums[back];
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[front]);
                        v.push_back(nums[back]);
                        answer.push_back(v);
                        while(front<back && nums[front] == k)
                            front++;
                        while(front < back && nums[back] == l)
                            back--;
                    }
                }
                while(j+1<n && nums[j] == nums[j+1])
                    j++;
                while(i+1<n && nums[i] == nums[i+1])
                    i++;
            }
        }
        return answer;
    }
};

int main()
{
   return 0;
}
