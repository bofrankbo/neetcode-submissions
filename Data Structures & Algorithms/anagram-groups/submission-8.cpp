class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> myMap;


        for (const auto& str : strs){
            string ana = str;
            sort(ana.begin(), ana.end());
            myMap[ana].push_back(str);
        }

        for (const auto& pair : myMap){
            ans.push_back(pair.second);
            
        }

        return ans;
    }
};
