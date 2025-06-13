class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(c != ']'){  //push until closing bracket
                st.push(c);}
            
            else {string str = ""; 
            while(!st.empty() && islower(st.top()))
            {
                str+= st.top(); //create string to be reprated
                st.pop();
            }
            reverse(str.begin(),str.end());
            st.pop(); //pop closing bracket

            string num = "";
            while(!st.empty() && isdigit(st.top()))
            {
                num += st.top();  //create number
                st.pop();
            }
            reverse(num.begin(),num.end());
            int times = stoi(num);

            string res = "";
            while(times--)
                res += str; //k times the string
            
            for(char r : res)  //add string to stac;
                st.push(r); }
        }
        string decodedString = "";
        while(!st.empty())
        {
            decodedString += st.top();
            st.pop();
        }
        reverse(decodedString.begin(),decodedString.end());
        return decodedString;
    }
};