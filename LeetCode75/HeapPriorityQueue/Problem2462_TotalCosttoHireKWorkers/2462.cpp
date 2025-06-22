class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long cost = 0;
        priority_queue<int, vector<int>, greater<>> minLeft, minRight;

        int n = costs.size();
        int l = 0, r = n - 1;

        while (k--) {
            while(minLeft.size() < candidates && l<=r) // prepare left candidate set
                minLeft.push(costs[l++]);

            while (minRight.size() < candidates && l<=r) // prepare right candidate set
                minRight.push(costs[r--]);
            

            int t1 = minLeft.size() > 0 ? minLeft.top() : INT_MAX;
            int t2 = minRight.size() > 0 ? minRight.top() : INT_MAX;

            if(t1<=t2)
            {
                cost += t1;
                minLeft.pop();
            }
            else{
                cost+= t2;
                minRight.pop();
            }
           
        }

        return cost;
    }
};