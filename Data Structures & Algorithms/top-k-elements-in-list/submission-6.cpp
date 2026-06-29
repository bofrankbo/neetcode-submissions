class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        vector<vector<int>> buckets(nums.size()+1);

        for (const auto& n : nums){
            myMap[n]++;
        }

        for (const auto& pair : myMap){
            int num = pair.first;
            int count = pair.second;
            buckets[count].push_back(num);
            // cout << num << " : " << count << endl;
        }

        vector<int> ans;
        for (int i=nums.size(); i>=0; i--){
            for (const auto& n : buckets[i]){
                k--;
                ans.push_back(n);
                if (k==0){
                    return ans;
                }
            }

        }

        return ans;
    }
};
