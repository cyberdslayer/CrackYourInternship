class Solution {
    
    private:
    int calNeigh(vector<vector<int>> &newBoard, int row, int col){
        int cnt  =0;
        int n = newBoard.size();
        int m = newBoard[0].size();
        int delRow[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
        int delCol[8] = {-1, 0, 1,-1, 1,-1, 0, 1};
        for(int i=0; i<8; i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if( nrow>=0 && ncol >=0 && nrow<n && ncol <m ){
                if( newBoard[nrow][ncol] == 1)
                    cnt++;
            }
        }
        return cnt;
    }
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> newBoard(n, vector<int> (m,-1));

        for(int i=0 ;i<n; i++){
            for(int j =0 ; j<m; j++){
                int liveCnt = calNeigh(board, i, j);
                if((liveCnt==2 || liveCnt ==3) && board[i][j] == 1){
                    newBoard[i][j] =1;
                }
                else if(liveCnt ==3 && board[i][j] == 0){
                    newBoard[i][j] =1;
                }
                else{
                    newBoard[i][j] = 0;
                }
            }
        }
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                board[i][j] = newBoard[i][j];
            }
        }
        return ;
    }
};