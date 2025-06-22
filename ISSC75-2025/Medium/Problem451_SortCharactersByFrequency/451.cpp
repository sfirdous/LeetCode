class Solution {
    public:
        string frequencySort(string s) {
            unordered_map<char,int> freq;
            for(char c : s)
                freq[c]++;
            
            priority_queue<pair<int,char>> maxHeap;
            for(auto& [c,count] : freq)
                maxHeap.push({count,c});
            
            string ans;
            while(!maxHeap.empty())
               { ans += string(maxHeap.top().first,maxHeap.top().second);
                maxHeap.pop();
            }
            return ans;
        }
    };