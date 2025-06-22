class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        for(int n : nums)
            maxHeap.push(n);

        int i = 0;
        int ans = nums[0];
        while(i < k)
        {
            ans = maxHeap.top();
            maxHeap.pop();
            i++;
        }
        return ans;
    }
};