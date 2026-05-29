#include <unordered_set>

class Solution {
public:
    unordered_set<int> mySet;
    bool hasDuplicate(vector<int>& nums) {
        
        for (int n : nums){
            mySet.insert(n);
        }

        if (mySet.size() == nums.size()){
            return false;
        }

        return true;
    }
};