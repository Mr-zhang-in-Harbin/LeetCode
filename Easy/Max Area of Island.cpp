class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int MaxArea = 0;
        for (int i = 0;i < grid.size();i++)
            for (int j = 0;j < grid[0].size();j++)
                if (grid[i][j] == 1)
                    MaxArea = max(MaxArea,LocArea(grid,i,j));
        return MaxArea;
    }
    
    int LocArea(vector<vector<int>>& grid, int i, int j) {
        if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
            grid[i][j] = 0;
            return 1 + LocArea(grid, i+1, j) + LocArea(grid, i-1, j) + LocArea(grid, i, j-1) + LocArea(grid, i, j+1);
        }
        return 0;
    }
};
