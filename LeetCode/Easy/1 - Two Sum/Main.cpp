#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++) {
            int sub = target - nums[i];
            if (um.find(sub) != um.end()) {
                return {um[sub], i};
            }

            um[nums[i]] = i;
        }

        return {};
    }
};