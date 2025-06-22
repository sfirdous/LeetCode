class Solution {
public:
    //checks if keys of both hashtable are equal
    bool areKeysEqual(unordered_map<char,int> &m1,unordered_map<char,int> &m2)
    {
        if(m1.size() != m2.size()) return false;
        //extracts only key
        for(auto &[key,_] : m1)
            if(m2.find(key) == m2.end()) return false;

        return true;
    }
    //checks if values of both hashtable are equal
    bool areValuesEqual(unordered_map<char,int> &m1,unordered_map<char,int> &m2)
    {
        if(m1.size() != m2.size()) return false;

        multiset<int> value1,value2;
        //extract only value
        for(auto &[_,val] : m1) value1.insert(val);
        for(auto &[_,val] : m2) value2.insert(val);

        return value1 == value2;

    }
  
    bool closeStrings(string word1, string word2) {
       //hashtable to store char and their freq
       unordered_map<char,int> m1;
       unordered_map<char,int> m2; 

       //created the freq table for both words
       for(auto w : word1) m1[w]++;
       for(auto w : word2) m2[w]++;  
        
       //returns results of comparison between keys and values of two hashtables
       return areKeysEqual(m1,m2) && areValuesEqual(m1,m2);
    }
};