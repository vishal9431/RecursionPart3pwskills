// Given an integer array nums that may contain dup.icates, return a.. possib.e subsets
// (the power set%D
// The so.ution set must not contain dup.icate subsets. Return the so.ution in any orderD
// Examp.e 0:
// Input: nums = [0,2,2]
// Output: [[],[0],[0,2],[0,2,2],[2],[2,2]]
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; // to store all subsets
        vector<int> curr; // to store the current individual subset (that we will build)
        sort(nums.begin(), nums.end()); // sort the array so that duplicates are adjacent
        helper(nums, ans, curr, 0); // we start from index 0
        return ans;
    }

    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int idx) {
        ans.push_back(curr); // include the current subset in the final answer
        for (int i = idx; i < nums.size(); i++) { // check for all possibilities
            if (i > idx && nums[i] == nums[i - 1]) continue; // if duplicate, then continue
            curr.push_back(nums[i]); // include nums[i] in the current subset
            helper(nums, ans, curr, i + 1); // recursive call to include next elements
            curr.pop_back(); // backtrack to explore subsets without nums[i]
        }
    }
};

int main() {
    vector<int> nums = {0, 2, 2};
    Solution sol;
    vector<vector<int>> result = sol.subsetsWithDup(nums);

    cout << "Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
