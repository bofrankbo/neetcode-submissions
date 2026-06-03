class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        for (const auto& n: nums){
            // cout << n << endl;
            mySet.insert(n);
        }

        if (mySet.size() == nums.size()){
            return false;
        }
        return true;
        
    }
};