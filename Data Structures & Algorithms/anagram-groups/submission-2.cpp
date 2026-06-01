#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //  1. C++ 速度外掛（解開輸入輸出流同步，刷題必加）
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<string, vector<string>> myMap;
        vector<vector<string>> ans;
        
        // 💡 優化：提早預留 map 的桶子數量，減少動態擴張開銷
        myMap.reserve(strs.size());
        
        //  2. 改用 const string& 避免字串複製
        for (const string& s : strs){
            string key = s;
            sort(key.begin(), key.end());
            myMap[key].push_back(s);          
        }

        // 💡 優化：提早挖好 ans 的坑，避免 vector 在 push_back 時一直搬家
        ans.reserve(myMap.size());

        for (auto& pair : myMap){ // 這裡不要用 const，因為後面要用 move 抽乾它
            //  3. 使用 std::move 轉移記憶體擁有權，免去整條 vector 複製的開銷
            ans.push_back(move(pair.second));
        }

        return ans;
    }
};