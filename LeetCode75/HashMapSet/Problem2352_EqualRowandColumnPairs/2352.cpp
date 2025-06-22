class Solution {
public:
    //takes vector and converts it to string
    // string vectorToString(vector<int>& v) {
    //     ostringstream oss;
    //     for (int num : v)
    //         oss << num << "#";
    //     return oss.str();
    // }

    // //return a speciifc column of grid
    // vector<int> getColumn(vector<vector<int>>& grid, int colIndex) {
    //     vector<int> column;
    //     for (auto row : grid) {
    //         if (colIndex < row.size())
    //             column.push_back(row[colIndex]);
    //     }

    //     return column;
    // }
    int equalPairs(vector<vector<int>>& grid) {
        // // hashtable to store freq of each array(row/col)
        // unordered_map<string, int> arrayFreq;

        // int n = grid.size();

        // // add each row
        // for (int i = 0; i < n; ++i)
        //     arrayFreq[vectorToString(grid[i])]++;

        // int pairs = 0;
        // //check for each column number of matching rows
        // for (int i = 0; i < n; ++i) {
        //     vector<int> col = getColumn(grid, i);
        //      string colString = vectorToString(col);

        //      if(arrayFreq.find(colString) != arrayFreq.end())
        //         pairs += arrayFreq[colString];
        // }

       
        // return pairs;
        map<vector<int>,int> rowfreq;
        for(auto row : grid) rowfreq[row]++;

        int n = grid.size();
        vector<int> col(n);
        int pairs = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            for(int j = 0 ; j < n ; ++j)
                col[j] = grid[j][i];
            pairs += rowfreq[col];
        }

        return pairs;
    }
};