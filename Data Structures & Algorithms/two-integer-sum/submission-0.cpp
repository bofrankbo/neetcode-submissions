class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n2 = 0;
        for (int i=0; i<nums.size(); i++){
            n2 = target - nums[i];
            for (int j=i+1; j<nums.size(); j++){
                cout << i << " and " << j << endl;
                if (n2 == nums[j]){
                    return {i, j};
                }
            }
        }
    }
};
