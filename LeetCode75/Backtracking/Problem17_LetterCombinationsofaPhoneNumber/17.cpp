class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> letterCombinations;

        if (digits == "")
            return letterCombinations;
            
        queue<string> q;
        q.push("");
        vector<string> mapping = {"",    "",    "abc",  "def", "ghi",
                                  "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (auto d : digits) {
            string letters = mapping[d - '0'];
            int k = q.size();
            while (k--) {
                string current = q.front();
                q.pop();
                for (auto l : letters)
                    q.push(current + l);
            }
        }
        while (!q.empty())
            letterCombinations.push_back(q.front()), q.pop();
        return letterCombinations;
    }
};