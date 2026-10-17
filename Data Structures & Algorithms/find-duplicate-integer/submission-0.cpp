class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int a=0;a<nums.size();a++){
            for(int b=0;b<nums.size();b++){
                if(a==b) continue;
                if(nums[a]==nums[b])
                    return nums[a];
            }
        }
        return -1;
    }
};
