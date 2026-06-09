class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26, 0);
        int l = 0;
        int r = 0;
        int max_len = 0;

        while(r != s.size()){
            // cout << "l:" << l << "  r:" << r << endl;
            
            counts[s[r] - 'A']++;
            
            int max_count = 0;
            char max_char = 'A';
            for (int i=0; i<26; i++){
                max_count = max(max_count, counts[i]);
            }
            
            if (r - l - max_count < k){
                // cout << max_count << endl;
                max_len = max(max_len, r - l + 1);
                r++;
            } else {
                counts[s[l] - 'A']--;
                l++;
                r++;
            }
        }
        return max_len;
    }
};
