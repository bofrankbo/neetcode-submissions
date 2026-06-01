# include<unordered_map>

class Solution {
public:
    unordered_map<char, int> myMaps;
    unordered_map<char, int> myMapt;

    bool isAnagram(string s, string t) {
        for (int i : s){
            myMaps[i]++;           
        }
        
        for (int i : t){
            myMapt[i]++;           
        }
        
        if (myMaps == myMapt){
            return true;
        }

        return false;
    }
};
