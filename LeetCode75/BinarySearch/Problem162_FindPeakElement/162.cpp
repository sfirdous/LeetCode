class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int low = 0 ,sz = nums.size();
        int high = sz-1;
       while(low < high)
       {
        int mid = low  + (high - low)/2 ;
        
        if(nums[mid] < nums[mid+1]) 
             low = mid+1;
        else 
            high = mid;
            
       }
       return low;

    }
};