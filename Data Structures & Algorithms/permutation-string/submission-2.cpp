class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> freq;
        if (s1.size()>s2.size())
            return false;
        for(int a=0;a<s1.size();a++){
            freq[s1[a]]++;
        }
        for(int a=0;a<s1.size()-1;a++){
            freq[s2[a]]--;
        }
        int i=0,j=0;
        for(int j=s1.size()-1;j<s2.size();j++) {
            freq[s2[j]]--;
            bool found = true;
            for(const auto key:freq) {
                if (key.second !=0) {
                    found =false;
                    break;
                }
            }
            if (found)
                return true;
            freq[s2[i]]++;
            i++;
        }
        return false;
    }
};
