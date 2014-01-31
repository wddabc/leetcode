/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Valid_Sudoku.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Thu Jan 30 23:30:34 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isValidSudoku(vector<vector<char> > &board) {
        bool exist[9];
        int N = board.size();
        for(int i = 0; i < N; ++ i){//check row
            for (int t = 0; t < 9; ++ t)exist[t] = false;
            for(int j = 0; j < N; ++ j)
                if(board[i][j] == '.') continue;
                else if(exist[board[i][j]-'1']) return false;
                else exist[board[i][j]-'1'] = true;
        }
        for(int i = 0; i < N; ++ i){//check column
            for (int t = 0; t < 9; ++ t)exist[t] = false;
            for(int j = 0; j < N; ++ j)
                if(board[j][i] == '.') continue;
                else if(exist[board[j][i]-'1']) return false;
                else exist[board[j][i]-'1'] = true;
        }
        for(int i = 0; i < N; ++ i){//check block
            for (int t = 0; t < 9; ++ t)exist[t] = false;
            for(int j = 0; j < N; ++ j){
                int x = (i/3)*3 + j/3, y = (i%3)*3 + j%3;
                if(board[x][y] == '.') continue;
                else if(exist[board[x][y]-'1']) return false;
                else exist[board[x][y]-'1'] = true;
            }
        }
        return true;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
