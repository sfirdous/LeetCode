class Solution {
    public:
        bool dfs(int current,int destination,vector<vector<int>>& adj,vector<bool>& visited)
        {
            if(current == destination)
                return true;
            visited[current] = true;
    
            for(int neighbour:adj[current])
            {
                if(!visited[neighbour])
                    if(dfs(neighbour,destination,adj,visited))
                        return true;
            }
    
            return false;
        }
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<vector<int>> adj(n);
            for(auto& e : edges )
            {
                adj[e[0]].push_back(e[1]);
                adj[e[1]].push_back(e[0]);
            }        
            vector<bool> visited(n,false);
            return dfs(source,destination,adj,visited);
        }
    };