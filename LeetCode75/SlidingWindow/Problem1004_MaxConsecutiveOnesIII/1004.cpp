class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int ans = 0;
        int window = 0;
        for(int right = 0; right < nums.size(); ++right)
        {
            window += nums[right];
            //stop if subarray is found with atmost k zeros
            while(window + k < right - left + 1)
                {
                    window -= nums[left];
                    left++;
                }
            ans = max(ans,right - left +1);
        }
        return ans;
    }
};