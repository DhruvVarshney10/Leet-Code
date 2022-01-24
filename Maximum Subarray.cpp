// Maximum Subarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.



Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int curr = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                max = nums[0];
                curr = nums[0];

            }
            else {

                if (nums[i] > curr + nums[i]) {

                    curr = nums[i];
                }
                else {

                    curr += nums[i];
                }

                if (max < curr) {
                    max = curr;
                }
            }
        }
        cout << max;
        return max;
    }
};

/*
Runtime: 250 ms, faster than 5.01% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.7 MB, less than 91.32% of C++ online submissions for Maximum Subarray.
*/

