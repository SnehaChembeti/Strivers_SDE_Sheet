/*
Given a set of N jobs where each jobi has a deadline and profit associated with it.

Each job takes 1 unit of time to complete and only one job can be scheduled at a time.
We earn the profit associated with job if and only if the job is completed by its deadline.

Find the number of jobs done and the maximum profit
*/

#include<bits/stdc++.h>
using namespace std;

struct Job
{
    int id;	 // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

class Solution
{
    public:
    static bool mycmp(Job a, Job b)
    {
        return (a.profit > b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        int ma = 0;
        for(int i=0; i<n; i++)
        {
            ma = max(ma, arr[i].dead);
        }
        int dup[ma];
        for(int i=0; i<ma; i++)
        {
            dup[i] = 1;
        }
        int pro = 0, b =0;
        sort(arr, arr+n, mycmp);
        for(int i=0; i<n; i++)
        {
            int a = arr[i].dead;
            for(int j = a-1; j>=0; j--)
            {
                if(dup[j])
                {
                    dup[j] = 0;
                    b++;
                    pro += arr[i].profit;
                    break;
                }
            }
        }
        vector<int>v;
        v.push_back(b);
        v.push_back(pro);
        return v;
    }
};

int main()
{
    return 0;
}
