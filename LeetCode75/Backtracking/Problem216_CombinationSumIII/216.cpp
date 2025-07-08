class Solution {
public:
    void help(int i, int k,int n,int sumTillNow,vector<int>& subSet,vector<vector<int>>& ans)
    {
        if(sumTillNow > n)
            return;
        
        if(k == 0)
        {
            if(sumTillNow == n)
                ans.push_back(subSet);
            return;
        }

        if(i == 10)
            return;

        //pick ith element
        subSet.push_back(i);
        help(i+1,k-1,n,sumTillNow+i,subSet,ans);
        subSet.pop_back();

        //ignore ith element
        help(i+1,k,n,sumTillNow,subSet,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> subSet;
        vector<vector<int>> ans;
        help(1,k,n,0,subSet,ans);
        return ans;
    }
};