#include <algorithm>
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = *max_element(piles.begin(), piles.end()); //set range for binary search

        int ans = high; //initialize answer
        while (low < high) {
            int mid = low + (high - low) / 2;
            long long totalHours = 0;
            for (int p : piles)
                totalHours += ceil((double)p / mid); //calculate total hours for k bananas/per
            if (totalHours > h) {
                low = mid + 1; //eliminate lower half to increase eating speed
            } else {
                ans = mid; //store current speed
                high = mid; //try to look for minimum eating speed
            }
        }

        return ans;  //return k
    }
};