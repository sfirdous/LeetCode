class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs; //vector to store no of pairs
        sort(potions.begin(),potions.end()); //sort potions array
         int ps = potions.size();
        for(int spell : spells)
        {
           int low = 0,end = ps;
            while(low < end)
            {
                int mid = low + ((end - low) / 2);
                if((long long)spell * potions[mid] >= success)
                    end = mid;
                else 
                    low = mid + 1;
                    
            }
            pairs.push_back(ps - low);
        }
        return pairs;
    }
};