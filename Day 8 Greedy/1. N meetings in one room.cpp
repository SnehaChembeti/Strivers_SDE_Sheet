/*
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool mycmp(pair<int,int>a, pair<int,int>b)
    {
        return (a.second < b.second);
    }

    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            v.push_back({start[i], end[i]});
        }
        sort(v.begin(), v.end(), mycmp);
        int prev = 0;
        int res = 1;
        for(int i=1; i<n; i++)
        {
            if(v[i].first > v[prev].second)
            {
                prev = i;
                res++;
            }
        }
        return res;
    }
};

int main()
{
    return 0;
}
