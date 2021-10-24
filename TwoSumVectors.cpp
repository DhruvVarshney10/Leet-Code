//Dhruv Varshney
//Oct 24, 2021
//dhruv.varshney@outlook.com

// ////////////////////////////////////////////
//The twoSum function taken is a vector and a taget value as parameter
//vector<int> nums -- a vector of integers
//target -- the final sum target
//the function looks for two distinct intergers which add up to the target value. Returns the indexes  of the two values.

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (i == j) { continue; }
                else {
                    if (nums.at(i) + nums.at(j) == target) {
                        result.push_back(i);
                        result.push_back(j);
                    }
                }

            }
        }
        return result;
    }
};
int main()
{
   
}




