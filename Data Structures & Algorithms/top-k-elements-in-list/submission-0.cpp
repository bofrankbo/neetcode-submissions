class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++){
            myMap[nums[i]]++;
        }
        
        vector<pair<int, int>> vec(myMap.begin(), myMap.end());
        sort(vec.begin(), vec.end(), [](const pair<int,int>& a, const pair<int, int>& b){
            return a.second > b.second;
        });

        vector<int> ans;
        for (int i=0; i<k; i++){
            ans.push_back(vec.begin()[i].first);
            // cout << vec.begin()[i].first << endl;
        }

        return ans;
    }
};
