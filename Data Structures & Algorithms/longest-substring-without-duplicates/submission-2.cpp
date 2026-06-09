class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mySet;
        
        int l = 0;
        int len = 0;

        for (int i=0; i<s.size(); i++){
            if (mySet.find(s[i]) != mySet.end()){
                len = max<int>(mySet.size(), len);
                while(mySet.count(s[i])){
                    mySet.erase(s[l]);
                    l++;
                }
            } 
            mySet.insert(s[i]);
        }
        len = max<int>(mySet.size(), len);
        return len;


        // pwwkew
        // p
        // pw

    }
};
