class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> postfix;
        vector<int> ans;

        int preMut = 1;
        for (int i=0; i<nums.size(); i++){
            preMut *= nums[i];
            prefix.push_back(preMut);
        }
        

        int postMut = 1;
        for (int i=nums.size()-1; i>=0; i--){
            postMut *= nums[i];
            postfix.push_back(postMut);
        }
        reverse(postfix.begin(), postfix.end());

        for (int i=0; i<nums.size(); i++){
            if (i == 0){
                ans.push_back(postfix[i+1]);
            } else if (i == nums.size()-1){
                ans.push_back(prefix[i-1]);
            } else {
                int mult = prefix[i-1] * postfix[i+1];
                ans.push_back(mult);
            }
        }

        return ans;
    }
};
