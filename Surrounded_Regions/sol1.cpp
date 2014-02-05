/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-02-2014
* Last Modified : Wed Feb  5 00:26:33 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(int i, int j, vector<vector<char>> &board){
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O')
            return;
        board[i][j] = '*';
        dfs(i-1, j, board);
        dfs(i+1, j, board);
        dfs(i, j-1, board);
        dfs(i, j+1, board);
    }
    void solve(vector<vector<char>> &board) {
        if(!board.size()) return;
        int m = board.size(), n = board[0].size();
        for(int i = 0; i < m; ++ i){
            dfs(i, 0, board);
            dfs(i, n-1, board);
        }
        for(int i = 0; i < n; ++ i){
            dfs(0, i, board);
            dfs(m-1, i, board);
        }
        for(int i = 0; i < m; ++ i)
            for(int j = 0; j < n; ++ j){
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == '*')
                    board[i][j] = 'O';
            }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
