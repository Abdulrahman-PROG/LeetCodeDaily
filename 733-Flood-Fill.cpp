class Solution {
public:
    bool isvalid(int r , int c,vector<vector<int>>& m ){
        if((r < 0 || r >= (int) m.size())){
            return false;
        }
        if(c < 0 || c >= (int)m[0].size()){
            return false;
        }
        return true;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> visited(image.size() , vector<bool> (image[0].size() ));
        dfs(sr,sc,image,visited,image[sr][sc], color);
        return image;
    }
    void dfs(int r , int c,vector<vector<int>>& matrix , vector<vector<bool>> &visited ,int oldcolor,int newcolor){

        if(!isvalid(r,c,matrix) || visited[r][c] || matrix[r][c] != oldcolor) return;

        visited[r][c] = true ,  matrix [r][c] = newcolor;
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        for(int i = 0 ; i < 4;i++){
            dfs(r+dr[i],c+dc[i],matrix,visited,oldcolor,newcolor);
        }
    }
};