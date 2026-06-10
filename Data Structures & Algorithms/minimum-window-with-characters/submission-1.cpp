class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()){
            return "";
        }

        int sl = 0;
        int sr = 0;
        int l = 0;
        int min_len = 0x3f3f3f3f;
        int have = 0;
        int need = t.size();
        unordered_map<char, int> myMap;

        for (int i=0; i<t.size(); i++){
            myMap[t[i]]++;
        }

        for (int r=0; r<s.size(); r++){
            myMap[s[r]]--;

            if (myMap[s[r]] >= 0){
                have++;
            }
        
            while (have == need){
                // cout << "len equal" << endl;
                
                int temp_size = r-l+1;
                if (temp_size < min_len){
                    min_len = min(temp_size, min_len);
                    sl = l;
                }

                // cout << temp_size << endl;

                myMap[s[l]]++;

                if(myMap[s[l]] > 0){
                    have--;
                }
                l++;
            }
        }

        if (min_len == 0x3f3f3f3f){
            return "";
        }

        return s.substr(sl, min_len);
    }
};
