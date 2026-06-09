class Solution {
public:
    bool isAllZero(const vector<int>& vec){
        // 檢查是否全為0
        for (int i=0; i<26; i++){
            if (vec[i] != 0){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }
        
        vector<int> counts(26 ,0);
        bool isPermu = true;
        
        for (int i=0; i<s1.size(); i++){
            counts[s1[i] - 'a']++;
            counts[s2[i] - 'a']--;
        }
        if (isAllZero(counts)) {
            return true;
        }
        
        // int l=0;
        int window = s1.size();
        for (int r=window; r<s2.size(); r++){
            cout << r << endl;
            // // isPermu = true;
            counts[s2[r] - 'a']--;
            counts[s2[r-window] - 'a']++;

            if (isAllZero(counts)) {
                return true;
            }
        }
        return false;
    }
};
