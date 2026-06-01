#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++){
            int n2 = target - nums[i];
            if (myMap.count(n2)){
                return {myMap[n2], i};
            }

            myMap[nums[i]] = i;
        }
    }
};
