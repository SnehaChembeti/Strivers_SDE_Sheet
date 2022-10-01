/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j = 0, ans = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
            {
                j++;
            }
            else
            {
                j = 0;
            }
            ans = max(ans, j);
        }
        return ans;
    }
};

int main()
{
    return 0;
}
