/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : N-Queens_II.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 20:13:26 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(int &cnt, vector<bool> &col, vector<bool> &diag1, vector<bool> &diag2, int rem){
        if(!rem){
            cnt++;
            return;
        }
        int m = col.size();
        for(int x = 0; x < m; ++ x){
            int y = m -rem;
            if(!col[x] && !diag1[x+y] && !diag2[x-y+m]){
                col[x] = true;
                diag1[x+y] = true;
                diag2[x-y+m] = true;
                dfs(cnt, col, diag1, diag2, rem-1);
                col[x] = false;
                diag1[x+y] = false;
                diag2[x-y+m] = false;
            }
        }
    }
    int totalNQueens(int n) {
        int res = 0;
        vector<bool> col(n,false), diag1(2*n, false), diag2(2*n, false);
        dfs(res, col, diag1, diag2, n);
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << totalNQueens(12) << endl;
	return 0;
}
