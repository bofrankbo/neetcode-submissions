class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26, 0);

        int l=0;
        int r=0;
        int max_len = 0;

        while(r < s.size()){
            counts[s[r] - 'A']++;
            
            int max_char_len = 0;
            for(int i=0; i<26; i++){
                if (max_char_len < counts[i]){
                    max_char_len = counts[i];
                }
            }

            // cout << r - l - max_char_len + 1 << " l: " << l <<  " r: " << r << endl;

            if (r - l + 1 - max_char_len <= k){
                max_len = max(r - l + 1, max_len);
            } else {
                counts[s[l] - 'A']--;
                l++;
            }

            r++;
        }

        // for(const auto& c:counts){
        //     cout << c << endl;
        // }

        return max_len;
    }
};
