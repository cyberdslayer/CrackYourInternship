class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size() -1, left =0; 
        int maxArea = 0;

        while(left< right){
            int currArea = ( min(height[right], height[left])* (right-left));
            maxArea = max(maxArea, currArea);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};