/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        if (nums1.size() < nums2.size()) {
            for (int i = 0; i < nums1.size(); i++) {
                for (int j = 0; j < nums2.size(); j++) {
                    if (nums1[i] == nums2[j]) {
                        ans.push_back(nums1[i]);
                        cout << nums1[i];
                        nums2[j] = -1;
                        break;
                    }

                }
            }
            return ans;
        }
        else {

            for (int i = 0; i < nums2.size(); i++) {
                for (int j = 0; j < nums1.size(); j++) {
                    if (nums2[i] == nums1[j]) {
                        ans.push_back(nums2[i]);
                        cout << nums2[i];
                        nums1[j] = -1;
                        break;
                    }

                }
            }
            return ans;
        }
    }
};
/*
Runtime: 19 ms, faster than 6.09% of C++ online submissions for Intersection of Two Arrays II.
Memory Usage: 10.2 MB, less than 59.05% of C++ online submissions for Intersection of Two Arrays II
*/