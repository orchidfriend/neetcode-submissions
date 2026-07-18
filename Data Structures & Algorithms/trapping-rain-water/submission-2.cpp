class Solution {
public:
    int trap(vector<int>& height) {
        int maxL=0,maxR=0;
        int i=0,j=height.size()-1;
        int trapping=0;
        while(i<=j) {
            if(maxL<=maxR){
                int temp = min(maxL,maxR) - height[i];
                trapping += (temp>0)? temp: 0;
                maxL = max(maxL, height[i]);
                i++;
            } else {
                int temp = min(maxL,maxR) - height[j];
                trapping += (temp>0)? temp: 0;
                maxR = max(maxR, height[j]);
                j--;
            }
        }
        return trapping;
    }
};
