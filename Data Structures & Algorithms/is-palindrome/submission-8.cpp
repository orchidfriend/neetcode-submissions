class Solution {
   public:
    bool isAlphaN(char a) {
        if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
            return true;
        else
            return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while ((i < j) && !isAlphaN(s[i])) i++;
            while ((i < j) && !isAlphaN(s[j])) j--;
            if(tolower(s[i])==tolower(s[j])) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};
