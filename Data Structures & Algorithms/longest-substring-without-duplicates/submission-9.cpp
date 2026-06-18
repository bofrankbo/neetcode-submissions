class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1){
            return 1;
        }

        unordered_set<char> mySet;

        int l = 0;
        int max_len = 0;
        for (int r=0; r<s.size(); r++){
            // check map
            if (mySet.find(s[r]) != mySet.end()){
                max_len = max<int>(mySet.size(), max_len);
                
                while(mySet.count(s[r])){
                    mySet.erase(s[l]);
                    l++;
                }
  
            }
            mySet.insert(s[r]);

        }
        max_len = max<int>(mySet.size(), max_len);
        return max_len;
    }
};
