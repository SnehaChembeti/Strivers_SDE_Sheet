/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int>&r, vector<vector<int>>&res, int i)
    {
        if(target == 0)
        {
            res.push_back(r);
        }
        for(int j=i; j<candidates.size(); j++)
        {
            if(target-candidates[j] < 0)
            {
                break;
            }
            else
            {
                r.push_back(candidates[j]);
                solve(candidates, target-candidates[j], r, res, j+1);
                while(j < candidates.size()-1 && candidates[j] == candidates[j+1])
                {
                    j++;
                }
                r.pop_back();
            }
        }
        return;
    }
};

int main()
{
    return 0;
}
