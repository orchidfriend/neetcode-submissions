class Solution {
   public:
    string encode(vector<string>& strs) {
        string res;
        for (int a = 0; a < strs.size(); a++) {
            res += to_string(strs[a].length()) + '|' + strs[a];
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        if (!s.length()) return res;
        int i = 0, j = 0;
        for (int a = 0; a < s.length(); a++) {
            if (s[a] >= '0' && s[a] <= '9') {
                j = a;
            } else if (s[a] == '|') {
                int leng = stoi(s.substr(i, j - i + 1));
                res.push_back(s.substr(a + 1, leng));
                a += 1 + leng;
                i = j = a;
            }
        }
        return res;
    }
};
