class Solution {
   public:
    string encode(vector<string>& strs) {
        string temp;
        for (const auto str : strs) {
            temp += to_string(str.size()) + '|' + str;
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '|') {
                int leng = stoi(s.substr(i, j - i));
                result.push_back(s.substr(j + 1, leng));
                j += leng;
                i = j + 1;
            }
        }
        return result;
    }
};
