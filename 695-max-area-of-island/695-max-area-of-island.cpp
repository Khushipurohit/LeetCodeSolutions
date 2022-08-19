class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int i, int j, int row, int column, int island){
        
        
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size()){
            return 0;
        }
        if (grid[i][j] == 0) {
            return 0;
        }
        
        grid[i][j] = 0;
        
       island = 0;
        
        island += dfs(grid, i, j - 1, row, column, island);
        island += dfs(grid, i, j + 1, row, column, island);
        island += dfs(grid, i - 1, j, row, column, island);
        island += dfs(grid, i + 1, j, row, column, island);
        
        return island + 1;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        
        int row = grid.size();
        int column = grid[0].size();
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                   int island;
                    //dfs(grid, i, j);
                    res = max(res, dfs(grid, i, j, row, column, island));
                }
            }
        }
        
        return res;
        
    }
};