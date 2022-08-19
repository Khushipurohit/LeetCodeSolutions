class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int i, int j, int row, int column, int &island){
        
        island++;
        grid[i][j] = 0;
        
        if(i+1 >= 0 && i+1 < row && j >= 0 && j < column && grid[i+1][j] == 1){
            dfs(grid, i+1, j, row, column, island);
        }
        
        if(i-1 >= 0 && i-1 < row && j >= 0 && j < column && grid[i-1][j] == 1){
            dfs(grid, i-1, j, row, column, island);
        }
        
        if(i >= 0 && i < row && j+1 >= 0 && j+1 < column && grid[i][j+1] == 1){
            dfs(grid, i, j+1, row, column, island);
        }
        
        if(i+1 >= 0 && i < row && j-1 >= 0 && j < column && grid[i][j-1] == 1){
            dfs(grid, i, j-1, row, column, island);
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        
        int row = grid.size();
        int column = grid[0].size();
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int island = 0;
                    dfs(grid, i, j, row, column, island);
                    res = max(res, island);
                }
            }
        }
        
        return res;
        
    }
};