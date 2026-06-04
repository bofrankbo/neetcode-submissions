class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // 1. 左邊遇到非法字元，直接唯讀跳過
            while (left < right && !isValid(s[left])) {
                left++;
            }
            // 2. 右邊遇到非法字元，直接唯讀跳過
            while (left < right && !isValid(s[right])) {
                right--;
            }

            // 3. 停在有效字元上，直接拿出來轉小寫比對
            if (toLower(s[left]) != toLower(s[right])) {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }

private:
    // 純讀取，判斷是否為有效字母數字
    bool isValid(char c) {
        return (c >= 'a' && c <= 'z') || 
               (c >= 'A' && c <= 'Z') || 
               (c >= '0' && c <= '9');
    }

    // 純讀取，回傳轉換後的小寫字元
    char toLower(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c + 32;
        }
        return c;
    }
};