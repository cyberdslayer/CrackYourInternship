class Solution {
    private:
    void dfs(vector<vector<int>>& ans, vector<vector<int>>& image,int newColor,int row, int col, int iniColor, int dr[], int dc[]){
        int n = image.size();
        int m = image[0].size();
        
        ans[row][col] = newColor;
        for(int i=0; i<4;i++){
            int nrow = row + dr[i];
            int ncol = col + dc[i];
            if(nrow>=0&& nrow<n && ncol >= 0 && ncol<m 
            && image[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor){
                dfs(ans, image,newColor,nrow, ncol, iniColor, dr, dc);
            }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int iniColor = image[sr][sc];
        vector<vector<int>> ans = image;
        int delRow[] = { -1, 0, 1, 0};
        int delCol[] = {0, +1, 0, -1};
      
        dfs(ans, image,color, sr, sc, iniColor, delRow, delCol);
        return ans;
    }
};