/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sudoku_Solver.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Sun Jan  5 21:54:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<char> getCand(int x, int y, vector<vector<char> > &board){
        vector<char> res;
        bool cando[9];
        for(int i = 0; i < 9; ++ i) cando[i] = true;
        for(int i = 0; i < 9; ++ i){
            if(board[x][i] != '.')cando[board[x][i] - '1'] = false;
            if(board[i][y] != '.')cando[board[i][y] - '1'] = false;
            if(board[(x/3)*3+i/3][(y/3)*3+i%3] != '.')cando[board[(x/3)*3+i/3][(y/3)*3+i%3] - '1'] = false;
        }
        for(int i = 0; i < 9; ++ i)
            if(cando[i]) res.push_back((char)'1' + i);
        return res;
    }
    bool solveSudokuBool(vector<vector<char> > &board){
        int N = 9;
        bool full = true;
        int x, y;
        for(x = 0; x < N; ++ x){
            for(y = 0; y < N; ++ y){
                if(board[x][y] == '.'){
                    full = false;
                    break;
                }
            }
            if(!full)break;
        }
        if(full) return true;
        vector<char> cand = getCand(x, y, board);
        if (!cand.size()) return false;
        for (int i = 0; i < cand.size(); ++ i){
            board[x][y] = cand[i];
            if(solveSudokuBool(board)) return true;
            board[x][y] = '.';
        }
        return false;
    }
    void solveSudoku(vector<vector<char> > &board) {
        solveSudokuBool(board);
    }

int main(int argc, const char* argv[])
{
	vector<vector<char> > board;
	for(int i = 0; i < 9; ++ i){
		vector<char> tmp;
		for(int i = 0; i < 9; ++ i)
		  tmp.push_back('.');
		board.push_back(tmp);
	}
	solveSudoku(board);
	return 0;
}
