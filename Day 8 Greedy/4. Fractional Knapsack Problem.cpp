/*
Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item.
*/

#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution
{
    public:
    static bool mycmp(Item a, Item b)
    {
        return (double(a.value)/double(a.weight) > double(b.value)/double(b.weight));
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, mycmp);
        double res = 0;
        for(int i=0; i<n; i++)
        {
            if(W > arr[i].weight)
            {
                W -= arr[i].weight;
                res += arr[i].value;
            }
            else
            {
                res += arr[i].value*(double(W)/double(arr[i].weight));
                W = 0;
            }
        }
        return res;
    }

};

int main()
{
    return 0;
}
