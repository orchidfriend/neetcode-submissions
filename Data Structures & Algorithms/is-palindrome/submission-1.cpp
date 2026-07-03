class Solution {
public:
    bool isPalindrome(string s) {
        string temps="";
        for(int a=0;a<s.length();a++) {
            if ((s[a] >='a') && (s[a] <='z')){
                temps += s[a];
            } else if ((s[a] >='A') && (s[a] <='Z')){
                temps += (char)(s[a]-'A'+'a');
            } else if (s[a]>='0'&&(s[a]<='9')){
                temps += s[a];
            }
        }
        int i=0,j=temps.length()-1;

        while (i<j) {
            if (temps[i] != temps[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
