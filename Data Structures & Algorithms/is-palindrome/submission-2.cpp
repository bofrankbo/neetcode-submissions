class Solution {
public:
    bool isPalindrome(string s) {
        int slow = 0;
        for (int fast=0; fast<s.size(); fast++){
            if (s[fast] >= 'a' and s[fast] <= 'z' 
            or s[fast] >= '0' and s[fast] <= '9' ){
                s[slow] = s[fast];
                slow++;
            } else if (s[fast] >= 'A' and s[fast] <= 'Z'){
                s[slow] = s[fast] + 32;
                slow++;
            }
        }
        s.resize(slow);
        cout << s << endl;

        for (int i=0; i<s.size(); i++){
            if(s[i] != s[s.size()-1-i]){
                return false;
            }
            if(i == s.size()-1-i || i == s.size()-i){
                return true;
            }
        }
        return true;
    }
};
