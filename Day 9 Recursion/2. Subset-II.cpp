/* Subset-II */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void fun(vector<int>& candidates, vector<int>&ds,int index){
       ans.push_back(ds);
      for(int i=index;i<candidates.size();i++){
           if(i>index&&candidates[i]==candidates[i-1])continue;
              ds.push_back(candidates[i]);
              fun(candidates,ds,i+1);
              ds.pop_back();
      }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<int>ds;
      sort(nums.begin(),nums.end());
      fun(nums,ds,0);
      return ans;
    }
};

int main()
{
    return 0;
}
