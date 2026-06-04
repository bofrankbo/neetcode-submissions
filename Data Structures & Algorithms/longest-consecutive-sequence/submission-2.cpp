class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mySet(nums.begin(), nums.end());

        int lcs = 0;
        
        for (const auto& num : nums){
            if(mySet.find(num-1) == mySet.end()){
                int templcs = 1;
                int tempnum = num+1;
                while (mySet.find(tempnum) != mySet.end()){
                    tempnum++;
                    templcs++;
                }
                if (templcs > lcs ){
                    lcs = templcs;
                }
            } 
        }

        return lcs;
    }
};
