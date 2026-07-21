class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1umap;
        for(int a=0;a<s1.size();a++) {
            s1umap[s1[a]]++;
        }
        unordered_map<char, int> s2umap;

        int must=s1umap.size();
        int have=0,i=0;
        for(int j=0;j<s2.size();j++) {
            if (s1umap.find(s2[j])!=s1umap.end()) {
                s2umap[s2[j]]++;
                if (s2umap[s2[j]]==s1umap[s2[j]]){
                    have++;
                    if (have==must){
                        return true;
                    }
                } 
                while (s2umap[s2[j]]>s1umap[s2[j]]) {
                    if (s2umap[s2[i]]==s1umap[s2[i]]){
                        have--;//有問題
                    }
                    s2umap[s2[i]]--;
                    i++;
                }
            } else {
                s2umap.clear();
                have=0;
                i=j+1;
            }
        }
        return false;
    }
};
