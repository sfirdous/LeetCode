class Solution {
public:
    int maxVowels(string s, int k) {
        int sub_max = 0;
        int n = s.size();
        //calualate the number of vowles in initial window
        for(int i = 0 ; i < k ; ++i)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u')
                sub_max +=1;
        
        //set the initial max
        int s_max = sub_max;

        for(int i = k ; i < n ; ++i)
        {
            //if the current char is vowel and increment count of vowles in substr
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u')
                sub_max += 1;
            //if the char to be removed was vowle decrement the count of vowles in substr
             if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i'|| s[i-k] == 'o'|| s[i-k] == 'u')
                sub_max -= 1;
            
            //update max 
            s_max = max(sub_max,s_max); 
        }
        return s_max;
    }
};