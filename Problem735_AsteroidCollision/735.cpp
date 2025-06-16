class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for (int a : asteroids) {
            bool destroyed = false;
            while (!s.empty() && s.top() > 0 && a <0) {
                if (abs(s.top()) < abs(a)) {
                    s.pop();
                    continue;
                } else if (abs(s.top()) == abs(a)) {
                    s.pop();
                }
                destroyed = true;
                break;
            }
            if(!destroyed) s.push(a);
        }

        vector<int> ans;
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};