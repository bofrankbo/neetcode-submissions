class Solution {
public:

    string encode(vector<string>& strs) {
        string sentStr = "";
        for (const auto& str : strs){
            // cout << str << to_string(str.size()) << endl;
            string temp = to_string(str.size()) + "#" + str;
            sentStr += temp;
        }
        // cout << sentStr << endl;
        
        return sentStr;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        // cout << s.substr(2,5) << endl;
        int l = 0;
        int i = 0;
        while(i<s.size() && s[i] >= '0' && s[i] <= '9'){
            l = l*10 + (s[i] - '0');
            // cout << "now is:" << s[i] << " l:" << l << endl;
            if (s[i+1] == '#'){
                string sstr = s.substr(i+2, l);
                ans.push_back(sstr);
                // cout << sstr << endl;
                i += l+2;
                l = 0;
            } else if (!(s[i] >= '0' && s[i] <= '9')){
                l = 0;
                i++;
            } else {
                i++;
            }
        }


        return ans;
    }
};
