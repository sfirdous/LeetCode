class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (auto word : s)
            if (isalnum(word))
                cleaned += tolower(word);
        int i = 0, j = cleaned.size()-1;
        bool palindrome = true;
        while (i <= j) {
            if (cleaned[i] == cleaned[j]) {
                i++;
                j--;
            } else {
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};