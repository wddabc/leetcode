/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Palindrome_Partitioning.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Tue Jan 21 19:07:33 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool is_pal(string str){
        int s = 0, e = str.length() - 1;
        while(s < e)
            if(str[s++] != str[e--]) return false;
        return true;
    }
    void dfs(vector<vector<string> > &cand, vector<string> &sol, string s, int start){
        if(start == s.length()) {
            cand.push_back(sol);
            return;
        }
        for(int i = start; i < s.length(); ++ i){
            string sub = s.substr(start, i-start+1);
            if(is_pal(sub)){
                sol.push_back(sub);
                dfs(cand, sol, s, i + 1);
                sol.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string> > res;
        vector<string> sol;
        dfs(res, sol, s, 0);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
