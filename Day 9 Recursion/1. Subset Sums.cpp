/*Given a list arr of N integers, print sums of all subsets in it.*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<int>arr, int N, int index, int sum, vector<int>&ans){

      if(index==N){

          ans.push_back(sum);

          return;

      }

      solve(arr,N,index+1,sum,ans);

      solve(arr,N,index+1,sum+arr[index],ans);

    }

    vector<int> subsetSums(vector<int> arr, int N)

    {

      int index=0;

     vector<int>ans;

     int sum=0;

      solve(arr,N,index,sum,ans);

      return ans;

    }
};

int main()
{
    return 0;
}
