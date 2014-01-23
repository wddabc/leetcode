/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Subsets_II.cpp
* Purpose :
* Creation Date : 17-01-2014
* Last Modified : Fri Jan 17 20:00:53 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<vector<int> > &cand, vector<int> &sol, vector<int> &S, int start){
        cand.push_back(sol);
        for(int i = start; i < S.size(); ++ i){
            sol.push_back(S[i]);
            dfs(cand, sol, S, i+1);
            sol.pop_back();
            while(i<S.size()-1 && S[i+1] == S[i]) i++;
        }
    }
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        vector<int> sol;
        vector<vector<int> >res;
        sort(S.begin(), S.end());
        dfs(res, sol, S, 0);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
