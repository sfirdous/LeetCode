class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0,n = nums.size();
        for(int i  = 1 ; i < n-1 ; ++i)
        {
            if(nums[i] != nums[i-1])
            {
                if(nums[i] > nums[i-1])
                {
                    int right = i+1;
                    while(right < n && nums[i] == nums[right])
                        right++;
                    if(right != n && nums[i] > nums[right]) count++;
                }
                else if(nums[i] < nums[i-1])
                {
                    int right = i+1;
                    while(right < n && nums[i] == nums[right])
                        right++;
                    if(right != n && nums[i] < nums[right]) count++;
                }
            }
        }
        return count;
    }
};