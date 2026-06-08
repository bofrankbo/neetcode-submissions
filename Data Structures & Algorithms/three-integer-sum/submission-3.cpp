class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        // [-4, -1, -1, 0, 1, 2]
        for (int i=0; i<nums.size()-2; i++){
            if (i > 0 and nums[i] == nums[i-1]){
                continue;
            }
            // cout << nums[i] << " ";
            int j = i+1;
            int k = nums.size()-1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];
                // cout << sum << " ";
                if (sum > 0){
                    k--;
                } else if (sum < 0){
                    j++;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j<k and nums[j] == nums[j+1]){
                        j++;
                    }
                    while (j<k and nums[k] == nums[k-1]){
                        k--;
                    }

                    j++;
                    k--;
                }
            }
            // cout << endl;
        }
        return ans;
    }
};
