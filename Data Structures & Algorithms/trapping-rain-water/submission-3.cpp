class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size()<=2)
            return 0;
        int i=0,j=height.size()-1;
        int leftMax=height[i],rightMax=height[j];
        int result;
        while(i<=j){
            if (leftMax<=rightMax){
                int water = leftMax - height[i];
                result += (water>0)?water:0;
                leftMax = max(leftMax,height[i]);
                i++;
            } else {
               int water = rightMax - height[j];
                result += (water>0)?water:0;
                rightMax = max(rightMax,height[j]);
                j--;
            }
        }
        return result;
    }
};
