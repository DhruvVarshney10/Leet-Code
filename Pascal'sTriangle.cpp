// Pascal'sTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:




Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int m = 0;
        int n = 1;
        for (int i = 1; i <= numRows; i++) {
            vector<int> temp(i);
            temp[0] = 1;
            temp[i - 1] = 1;
            if (i != 1 && i != 2) {
                for (int j = 0; j < i; j++) {
                    if (temp[j] != 1) {
                        temp[j] = ans[i - 2][m] + ans[i - 2][n];
                        m++;
                        n++;
                    }
                    
                    if (j == i - 1) { m = 0; n = 1; break; }
                }

            }
            ans.push_back(temp);

        }
        return ans;
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.3 MB, less than 91.69% of C++ online submissions for Pascal's Triangle.

*/

