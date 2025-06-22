class Solution {
    public:
      
        vector<int> topKFrequent(vector<int>& nums, int k) {
            //create map to store freq
            unordered_map<int,int> freq;
            for(int n : nums)
                freq[n]++;
            
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> minHeap;
            for(auto& [num,count] : freq)
               { minHeap.push({count,num});
                if(minHeap.size() > k)
                    minHeap.pop();}
            
            vector<int> ans;
            while(!minHeap.empty())
               { ans.push_back(minHeap.top().second);
                minHeap.pop();}
            
            return ans;
        }
    };