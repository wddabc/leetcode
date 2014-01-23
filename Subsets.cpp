/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Subsets.cpp
* Purpose :
* Creation Date : 10-01-2014
* Last Modified : Fri Jan 10 00:42:20 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<int> &cand, vector<vector<int> > &coll, vector<int> &sol, vector<bool> visited, int start){
        coll.push_back(sol);
        for(int i = start; i < cand.size(); ++ i)
            if(!visited[i]){
                visited[i] = true;
                sol.push_back(cand[i]);
                dfs(cand, coll, sol, visited, i + 1);
                sol.pop_back();
                visited[i] = false;
            }
    }
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int> > res;
        vector<int> sol;
        vector<bool> visited(S.size(), false);
        sort(S.begin(), S.end());
        dfs(S, res, sol, visited, 0);
        return res;        
    }
int main(int argc, const char* argv[])
{
	return 0;
}
