class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        unordered_set<int> mySet(nums.begin(), nums.end());

        int lcs = 1;
        
        for (const auto& num : nums){
            int curr = num;
            if (mySet.find(curr-1) != mySet.end()){
                continue;
            }
            int temp = 1;
            while (mySet.find(curr+1) != mySet.end()){
                // cout << curr << endl;
                temp++;
                curr++;

                if (temp > lcs){
                    lcs = temp;
                }
            }
            // cout << endl;
            temp = 0;
        }
        return lcs;
    }
};
