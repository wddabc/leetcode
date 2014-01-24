/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : N-Queens_II.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 20:13:26 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(int &count, bool *col, bool *diag1, bool *diag2, int cur_row, int N){
        if (cur_row == N){
            count ++;
            return;
        }
        for(int i = 0; i < N; ++ i){
            if(!col[i]&&!diag1[i+cur_row]&&!diag2[i-cur_row+N-1]){
                col[i] = true;
                diag1[i+cur_row] = true;
                diag2[i-cur_row+N-1] = true;
                dfs(count, col, diag1, diag2, cur_row + 1, N);
                col[i] = false;
                diag1[i+cur_row] = false;
                diag2[i-cur_row+N-1] = false;
            }
        }
    }
    int totalNQueens(int n) {
        int res = 0;
        bool *col = new bool[n], *diag1 = new bool[2*n], *diag2 = new bool[2*n];
        for(int i = 0; i < n; ++ i) col[i] = false;
        for(int i = 0; i < 2*n; ++ i) {
            diag1[i] = false;
            diag2[i] = false;
        }
        dfs(res, col, diag1, diag2, 0, n);
        delete[] col;
        delete[] diag1;
        delete[] diag2;
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << totalNQueens(12) << endl;
	return 0;
}
