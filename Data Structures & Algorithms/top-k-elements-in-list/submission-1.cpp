class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++){
            myMap[nums[i]]++;
        }
    
        vector<vector<int>> bucket(nums.size()+1);
        for (const auto& pair:myMap){
            int num = pair.first;
            int count = pair.second;
            bucket[count].push_back(num);
        }

        vector<int> ans;

        for (int i=nums.size(); i>0; i--){
            for (int n : bucket[i]){
                ans.push_back(n);
                if (ans.size() >= k){
                    return ans;
                }
            }
            // cout << vec.begin()[i].first << endl;
        }

        return ans;
    }
};
