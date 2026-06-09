class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;

        for (int i=0; i<nums.size(); i++){
            myMap[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for (const auto& pair : myMap){
            int num = pair.first;
            int freq = pair.second;
            bucket[freq].push_back(num);
        }

        vector<int> ans;
        for (int i=nums.size(); i>0; i--){
            for (const auto& b: bucket[i]){
                ans.push_back(b);
                k--;
                if (k==0){
                    return ans;
                }
            }
        }
        return ans;
    }
};
