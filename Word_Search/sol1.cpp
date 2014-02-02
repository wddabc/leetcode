/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Word_Search.cpp
* Purpose :
* Creation Date : 10-01-2014
* Last Modified : Fri Jan 10 15:04:01 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool dfs(vector<vector<char> > &board, string word, int idx, vector<vector<bool> > &used, int i, int j){
        int m = board.size(), n = board[0].size();
        if(i < 0 || i >= m || j < 0 || j >= n || used[i][j] ||board[i][j] != word[idx]) 
            return false;
        if(idx == word.length()-1) return true;
        used[i][j] = true;
        bool res = dfs(board, word, idx + 1, used, i-1, j) || dfs(board, word, idx + 1, used, i, j-1) || dfs(board, word, idx + 1, used, i, j+1) || dfs(board, word, idx + 1, used, i+1, j);
        used[i][j] = false;
        return res;
    }
    bool exist(vector<vector<char> > &board, string word) {
        if(word.empty()) return true;
        if(board.empty()) return false;
        int m = board.size(), n = board[0].size();
        vector<vector<bool> > used(m, vector<bool>(n, false));
        for(int i = 0; i < m; ++ i)
            for(int j = 0; j < n; ++ j)
                if(dfs(board, word, 0, used, i, j)) 
                    return true;
        return false;
    }
int main(int argc, const char* argv[])
{
	vector<vector<char> > board;
	board.push_back(vector<char>());
	board.back().push_back('A');
	board.back().push_back('B');
	board.back().push_back('C');
	board.back().push_back('E');
	board.push_back(vector<char>());
	board.back().push_back('S');
	board.back().push_back('F');
	board.back().push_back('C');
	board.back().push_back('S');
	board.push_back(vector<char>());
	board.back().push_back('A');
	board.back().push_back('D');
	board.back().push_back('E');
	board.back().push_back('E');
	string a = "SEE";
	cout << exist(board, a) << endl;
	return 0;
}
