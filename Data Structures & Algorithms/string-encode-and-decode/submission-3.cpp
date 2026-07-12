class Solution {
   public:
    string encode(vector<string>& strs) {
        string result;

        for (int a = 0; a < strs.size(); a++) {
            result += to_string(strs[a].size()) + '|' + strs[a];
        }
        return result;
    }

    vector<string> decode(string s) {
        int i = 0, j = 0;
        vector<string> result;

        for (int a = 0; a < s.length(); a++) {
            if ((s[a] >= '0') && (s[a] <= '9')) {
                j = a;
            } else if (s[a] == '|') {
                int length = stoi(s.substr(i, a - i));
                result.push_back(s.substr(a + 1, length));
                a += length;
                i = a + 1;
            }
        }
        return result;
    }
};
