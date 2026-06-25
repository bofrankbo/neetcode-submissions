class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }


        unordered_map<char, int> myMap_s;
        unordered_map<char, int> myMap_t;

        for (const auto& c:s){
            myMap_s[c]++;
        }
        for (const auto& c:t){
            myMap_t[c]++;
        }

        for (const auto& pair:myMap_s){
            // cout << pair.first << myMap_t[pair.first] << myMap_s[pair.first] << endl;
            if (myMap_t[pair.first] !=  myMap_s[pair.first]){
                return false;
            }
        }
        return true;
    }
};
