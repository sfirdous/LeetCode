class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(int a : arr)
            freq[a]++;

        int largestLucky = -1;
        for(auto &pair : freq)
            if(pair.first == pair.second)
                largestLucky = max(pair.first,largestLucky);
                
        return largestLucky;
    }
};