/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Word_Search.cpp
* Purpose :
* Creation Date : 10-01-2014
* Last Modified : Fri Jan 10 15:04:01 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool dfs(int i, int j, vector<vector<char> > &board, vector<vector<bool> > &visited, string &word, int idx){
        if(i < 0 || i >= board.size()) return false;
        if(j < 0 || j >= board[i].size()) return false;
        if(visited[i][j]) return false;
        if(board[i][j] != word[idx]) return false;
        else {
            if(idx == word.length() - 1) return true;
            visited[i][j] = true;
            if(dfs(i+1, j, board, visited, word, idx+1)) return true;
            if(dfs(i, j+1, board, visited, word, idx+1)) return true;
            if(dfs(i-1, j, board, visited, word, idx+1)) return true;
            if(dfs(i, j-1, board, visited, word, idx+1)) return true;
            visited[i][j] = false;
        }
        return false;
    }
    bool exist(vector<vector<char> > &board, string word) {
        vector<vector<bool> > visited;
        for(int i = 0; i < board.size(); ++ i){
            visited.push_back(vector<bool>());
            for(int j = 0; j < board[i].size(); ++ j)
                visited.back().push_back(false);
        }
        for(int i = 0; i < board.size(); ++ i)
            for(int j = 0; j < board[i].size(); ++ j)
                if(dfs(i, j, board, visited, word, 0))
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
