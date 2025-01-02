class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int length = gain.size();
        vector<int> altitudes(length+1,0);
        for(int i = 0 ; i < length;++i){
            altitudes[i+1] = altitudes[i] + gain[i];
        }
        
        int max = altitudes[0];
         for(int i = 0 ; i < length;++i){
            if(altitudes[i] > max){
                max = altitudes[i];
            }
        }


        
        return max;
    }
};