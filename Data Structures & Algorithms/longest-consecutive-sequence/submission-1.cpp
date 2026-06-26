class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;
        int max_streak=0;

        for(int a=0;a<nums.size();a++) {
            uset.insert(nums[a]);
        }
        for(int a=0;a<nums.size();a++) {
            int streak=1;
            int first_element=nums[a]+1;
            while(uset.find(first_element) != uset.end()){
                streak++;
                first_element++;
            }
            max_streak = max(max_streak,streak);
        }
        return max_streak;
    }
};
