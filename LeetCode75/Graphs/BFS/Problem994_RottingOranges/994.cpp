class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int, int>> bfs;
        int fresh = 0;
        for(int i = 0 ; i  < row ; ++i)
        {
            for(int j = 0 ; j < col ; ++j)
            {
                if(grid[i][j] == 2)
                    bfs.push({i,j});
                else if (grid[i][j] == 1)
                    fresh++;
            }
        }
        if (fresh == 0) return 0;
        int time = -1;

        vector<vector<int>> direction = {{-1,0},{1,0},{0,1},{0,-1}};

        while (!bfs.empty()) {
            int size = bfs.size();
            while(size--) {
                auto[x_cord,y_cord] = bfs.front();
                bfs.pop();
                for(int j = 0; j < 4 ; ++j)
                {
                    int x = x_cord+direction[j][0];
                    int y = y_cord+direction[j][1];

                    if(x >= 0 && y >= 0 && x < row && y < col && grid[x][y] == 1 )
                       {
                        grid[x][y] = 2;
                        bfs.push({x,y});
                        fresh--;
                       }
                    
                }
            }
            time++;
        }
        return fresh == 0 ? time : -1;
    }
};