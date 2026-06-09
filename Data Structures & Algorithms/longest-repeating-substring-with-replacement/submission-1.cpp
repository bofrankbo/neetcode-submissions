class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l = 0;
        int r = 0;
        int max_len = 0;

        while(r != s.size()){
            vector<int> counts(26, 0);
            // cout << "l:" << l << "  r:" << r << endl;
            for (int i=l; i<=r; i++){
                counts[s[i] - 'A']++;
            }
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
                l++;
            }
        }
        return max_len;
    }
};
