/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : N-Queens.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 19:44:46 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool valid(int row, int col, vector<vector<bool> > &board){
        int N = board.size();
        for(int i = 0; i < N; ++ i) if(board[i][col]) return false;
        int k = max(0, row -col);
        while(k < N && k+col-row < N){
            if(board[k][k+col-row]) return false;
            k++;
        }
        k = max(0, col + row - N);
        while(k < N && col + row - k>= 0){
            if(board[k][col+row-k]) return false;
            k++;
        }
        return true;
    }
    void dfs(vector<vector<string> > &coll, vector<vector<bool> > &board, int cur_row, int N){
        if (cur_row == N){
            vector<string> sol;
            for(int i = 0; i < N; ++ i){
                string rows = "";
                for(int j = 0; j < N; ++ j){
                    if(board[i][j]) rows += "Q";
                    else rows += ".";
                }
                sol.push_back(rows);
            }
            coll.push_back(sol);
            return;
        }
        for(int i = 0; i < N; ++ i){
            if(valid(cur_row, i, board)){
                board[cur_row][i] = true;
                dfs(coll, board, cur_row + 1, N);
                board[cur_row][i] = false;
            }
        }
    }
    vector<vector<string> > solveNQueens(int n) {
        vector<vector<string> > coll;
        vector<vector<bool> > board;
        for(int i = 0; i < n; ++ i) board.push_back(vector<bool>(n, false));
        dfs(coll, board, 0, n);
        return coll;
    }
int main(int argc, const char* argv[])
{
	cout << solveNQueens(8).size() << endl;
	return 0;
}
