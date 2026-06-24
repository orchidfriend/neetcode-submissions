class Solution {
   public:
    string encode(vector<string>& strs) {
        string result;
        if (!strs.size())
            return result;

        for (int a = 0; a < strs.size(); a++) {
            result += to_string(strs[a].length()) + '|' + strs[a];
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        size_t i = 0, j = 0;

        if (s.length()) {
            for (int a = 0; a < s.length(); a++) {
                if ((s[a] >= '0') && (s[a] <= '9')) {
                    j = a;
                } else if (s[a] == '|') {
                    int leng = stoi(s.substr(i, a - i));
                    // cout << leng << "\n";
                    result.push_back(s.substr(a + 1, leng));
                    i = a + 1 + leng;
                    a = i - 1;
                }
            }
        } 
        return result;
    }
};
