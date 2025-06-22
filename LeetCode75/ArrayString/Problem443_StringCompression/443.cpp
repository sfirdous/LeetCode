class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0; //to track where the changes are to be made
        int n = chars.size();
        for(int i =0 ; i < n;i++)
        {
            char ch = chars[i];
            int count = 0;
            //count the freq of character
            while(i < n && chars[i] == ch){
                count++;
                i++;
            }
            //add character if freq is 1
            if(count == 1){
                chars[idx++] = ch;
            }
            //add character and frequency
            else{
                chars[idx++] = ch;
                string str = to_string(count);
                //add digits of freq 
                for(char dig:str){
                    chars[idx++] = dig;
                }
            }
            //to counter the i++ 
            i--;
        }
        return idx;
    }
};