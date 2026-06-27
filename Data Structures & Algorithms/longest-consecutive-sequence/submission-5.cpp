class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> umap;
        int size = nums.size();
        int leng=0;

        for (int a=0;a<size;a++){
            if (!umap[nums[a]]) {
                umap[nums[a]] = umap[nums[a]-1] + umap[nums[a]+1] + 1;
                umap[nums[a]-umap[nums[a]-1]] = umap[nums[a]];
                umap[nums[a]+umap[nums[a]+1]] = umap[nums[a]];
            }
            leng = max(leng,umap[nums[a]]);
        }
        return leng;
    }
};
