class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int row = maze.size();
        int col = maze[0].size();

        queue<pair<int,int>> bfs; //queue for bfs traversal
        int steps = 1;            //number of steps to reach exit

        vector<vector<int>> direction = {{0,1},{0,-1},{1,0},{-1,0}}; //adjacent cells

        bfs.push({entrance[0],entrance[1]});  //starting point
        maze[entrance[0]][entrance[1]] = '+'; //mark starting cell as visited

        while(!bfs.empty())
        {
            int size = bfs.size(); //number of node in level
            for(int i = 0; i < size;++i)
            {
                auto[x_cord,y_cord] = bfs.front();
                bfs.pop();

                for(int k = 0 ; k < 4;++k)
                {
                    int x = x_cord + direction[k][0];
                    int y = y_cord + direction[k][1];

                    if(x < 0 || y < 0 || x >= row || y >= col || maze[x][y] == '+')
                        continue;

                    if(x == 0 || y == 0|| x == row-1 || y == col - 1)
                        return steps;
                    
                    maze[x][y] = '+';     //mark adjacent cell as visited
                    bfs.push({x,y});      //push adjacent cell
                    
                }
                
            }
             steps++;
        }

        return -1;
    }
};