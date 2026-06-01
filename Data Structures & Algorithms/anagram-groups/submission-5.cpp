#include <unordered_map>
#include <set>
#include <algorithm>


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> myMap;
        vector<vector<string>> ans;

        for (const string& s:strs){
            string key = s;
            sort(key.begin(), key.end());
            myMap[key].push_back(s);
        } 

        for (const auto& pair:myMap){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
