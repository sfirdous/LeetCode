class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1_s = word1.size();
        int w2_s = word2.size();
        int length = w1_s+w2_s;
        string merged;
        int w1=0,w2=0;
        for(int i = 0 ; i <= length;++i){
            if(i%2 == 0 && w1 < w1_s ){
                merged.push_back(word1[w1]);
                w1++;
            }else if(w2 < w2_s){
                merged.push_back(word2[w2]);
                w2++;
            }
        }
        return merged;

    }
};