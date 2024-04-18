class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    perimeter += 4; // Add 4 initially for each land cell
                    
                    // Check left neighbor
                    if (j > 0 && grid[i][j - 1] == 1) 
                        perimeter -= 2; // Deduct 2 if left neighbor is land
                    
                    // Check top neighbor
                    if (i > 0 && grid[i - 1][j] == 1) 
                        perimeter -= 2; // Deduct 2 if top neighbor is land
                }
            }
        }
        
        return perimeter;
    }
};
