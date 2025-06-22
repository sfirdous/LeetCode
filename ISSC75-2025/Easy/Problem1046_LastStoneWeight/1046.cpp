class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {
            priority_queue<int> maxHeap(stones.begin(),stones.end());
    
            while(maxHeap.size() >= 2)
            {
                int y = maxHeap.top();
                maxHeap.pop();
                int x = maxHeap.top();
                maxHeap.pop();
    
                if(y != x)
                    maxHeap.push(y - x);
            }
    
            return maxHeap.empty() ? 0 : maxHeap.top();
        }
    };