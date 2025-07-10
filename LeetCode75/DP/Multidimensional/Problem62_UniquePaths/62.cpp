class Solution {
public:
    int t[101][101]; // maximum size of grid
    int solve(int i, int j,int n,int m)
    {
        if(i >= n || j >= m)
            return 0;
        
        if(i == n-1 && j == m-1)
            return 1;
        
        if(t[i][j] != -1)
            return t[i][j]; //return if already computed
        
        int right = solve(i,j+1,n,m);
        int bottom = solve(i+1,j,n,m);

        return t[i][j]= right+bottom;
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t)); //-1 so as to include current cell
        return solve(0,0,n,m);
    }
};