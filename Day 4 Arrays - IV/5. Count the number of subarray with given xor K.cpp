/*
Given an array of integers A and an integer B.

Find the total number of subarrays having bitwise XOR of all elements equals to B.
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    unordered_map<int,int>visited;
    int cpx = 0;
    long long c=0;
    for(int i=0;i<A.size();i++){
        cpx^=A[i];
        if(cpx==B) c++;
        int h = cpx^B;
        if(visited.find(h)!=visited.end()){
            c=c+visited[h];
        }
        visited[cpx]++;
    }
    return c;
}

int main()
{
   return 0;
}
