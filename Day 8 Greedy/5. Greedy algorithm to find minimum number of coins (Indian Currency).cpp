/*
Given a value V, if we want to make a change for V Rs, and we have an infinite supply of each of the denominations in Indian currency,
i.e., we have an infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes,
what is the minimum number of coins and/or notes needed to make the change.
*/

#include<bits/stdc++.h>
using namespace std;

int findMinimumCoins(int amount)
{
    // Write your code here
    int res = 0, a =0;
    int arr[9];
    arr[0] = 1; arr[1] = 2; arr[2] = 5; arr[3] = 10; arr[4] = 20;
    arr[5] = 50; arr[6] = 100; arr[7] = 500; arr[8] = 1000;
    for(int i=8; i>=0; i--)
    {
        if(amount > 0)
        {
            a = amount/arr[i];
            res += a;
            amount -= a*arr[i];
        }
    }
    return res;
}

int main()
{
    return 0;
}
