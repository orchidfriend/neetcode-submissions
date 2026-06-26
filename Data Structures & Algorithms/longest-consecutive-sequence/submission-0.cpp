class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        int size = nums.size();
        int max_leng=0;
        for(int a=0;a<size;a++) {
            uset.insert(nums[a]);
        }
        for(int a=0;a<size;a++) {
            int first_element=nums[a]+1;
            int streak=1;
            while (uset.count(first_element)) {
                first_element++;
                streak++;
            }
            max_leng = max(max_leng,streak);
        }
        return max_leng;
    }
};
