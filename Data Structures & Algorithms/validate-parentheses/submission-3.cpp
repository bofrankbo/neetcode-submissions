class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0){
            return false;
        }

        stack<char> stk;
        unordered_map<char, char>  myMap = {
            { ')' , '(' },
            { ']' , '[' },
            { '}' , '{' }
        };

        for(int i=0; i<s.size(); i++){
            if (myMap.count(s[i])){
                // cout << stk.top() << " " << myMap[s[i]] << endl;
                if (!stk.empty() and stk.top() == myMap[s[i]]){
                    stk.pop();
                } else {
                    return false;
                }
            } else {
                stk.push(s[i]);
            }
        }

        if (!stk.empty()){
            return false;
        } else{
            return true;
        }
        
    }
};
