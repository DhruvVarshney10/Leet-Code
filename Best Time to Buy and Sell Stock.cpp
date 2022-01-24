// Best Time to Buy and Sell Stock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int diff = 0;
        int prof = 0;
        if (a.size() == 1) { return prof; }
        if (a.size() == 2) { diff = a[1] - a[0]; if (diff > 0) { return diff; } else { return 0; } }
        for (int i = 0; i < a.size();) {
            for (int ch = 1; ch < a.size(); ch++) {
                if (a[i + ch] - a[i] < 0 && (i + ch) < a.size() - 1) {
                    i = i + ch;
                    break;
                }
                else {
                    diff = a[i + ch] - a[i];
                    if (diff > prof) { prof = diff; }
                    if (i + ch == a.size() - 1) { return prof; }
                }
            }
        }
        return prof;
    }
};


int main()
{
    Solution s;
    vector<int> a = {2,4,7,1};
    s.maxProfit(a);
}
/*
Runtime: 128 ms, faster than 56.86% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 93.3 MB, less than 90.13% of C++ online submissions for Best Time to Buy and Sell Stock.
*/

