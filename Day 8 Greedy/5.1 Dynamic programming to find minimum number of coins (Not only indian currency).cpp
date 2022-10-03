/*
Given a value V, if we want to make a change for V cents, and we have an infinite supply of each of C = { C1, C2, .., Cm} valued coins,
what is the minimum number of coins to make the change? If it’s not possible to make a change, print -1. (NOT ONLY INDIAN CURRENCY)
*/

#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int V)
{
   // base case
   if (V == 0) return 0;

   // Initialize result
   int res = INT_MAX;

   // Try every coin that has smaller value than V
   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);

         // Check for INT_MAX to avoid overflow and see if
         // result can minimized
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}

int main()
{
    return 0;
}
