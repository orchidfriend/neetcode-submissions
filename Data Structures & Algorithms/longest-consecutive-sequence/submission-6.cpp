class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(),nums.end());
        int maxleng=0;

        for(int a=0;a<nums.size();a++) {
            if (!uset.count(nums[a]-1)) {
                int leng=1;
                int temp = nums[a];
                while(uset.count(temp+1)){
                    temp++;
                    leng++;
                }
                maxleng=max(leng,maxleng);
            }
        }
        return maxleng;
    }
};
