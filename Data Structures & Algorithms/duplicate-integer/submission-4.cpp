class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        for (const auto& n : nums){
            if (mySet.count(n) != 0){
                return true;
            }
            mySet.insert(n);

        }

        return false;
    }
};