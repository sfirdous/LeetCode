class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0; //ans
        int lp = 0; //left pointer
        int rp = height.size() -1; //right pointer
        while(lp < rp)
        {
            int w = rp - lp;
            int h = min(height[lp],height[rp]);
            maxWater = max(maxWater,w*h);
            //move the pointer that has small height
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};