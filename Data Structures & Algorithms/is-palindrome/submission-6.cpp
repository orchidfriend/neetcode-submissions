class Solution {
   public:
    bool isAlphaN(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            while (!isAlphaN(s[i]) && (i < j)) {
                i++;
            }
            while (!isAlphaN(s[j]) && (i < j)) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
