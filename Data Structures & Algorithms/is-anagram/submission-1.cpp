class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> myMaps;
        unordered_map<char, int> myMapt;

        for (const auto& c:s){
            myMaps[c]++;
        }
        
        for (const auto& c:t){
            myMapt[c]++;
        }

        if (myMaps == myMapt){
            return true;
        }
        return false;
        
    }
};
