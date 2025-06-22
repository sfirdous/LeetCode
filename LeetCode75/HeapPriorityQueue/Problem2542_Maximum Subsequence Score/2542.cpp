class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<pair<int,int>> p;

        for(int i = 0 ; i < n;++i)
            p.push_back({nums2[i],nums1[i]});
        
        sort(p.rbegin(),p.rend());
        long long sum = 0;
        priority_queue<int,vector<int>,greater<>> minHeap;
        for(int i = 0 ; i < k - 1;++i)
        {
            sum += p[i].second;
            minHeap.push(p[i].second);
        }

        long long ans = 0;
        for(int i = k -1; i < n ; ++i)
        {
            sum += p[i].second;
            minHeap.push(p[i].second);

            ans = max(ans,sum*p[i].first);

            sum -= minHeap.top();
            minHeap.pop();
        }
        return ans;
    }
};


