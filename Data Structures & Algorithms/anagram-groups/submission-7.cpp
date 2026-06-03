class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> myMap;
        vector<vector<string>> ans;

        for (const auto& str:strs){
            // cout << str << endl;
            string ana = str;
            sort(ana.begin(), ana.end());
            myMap[ana].push_back(str);            
        }

        for (const auto& pair:myMap){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
