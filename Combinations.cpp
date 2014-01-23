/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Combinations.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 17:43:06 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<int> &cand, vector<vector<int> > &coll, vector<int> &sol, vector<bool> visited, int start, int k){
        if(!k){
            coll.push_back(sol);
			for (int i = 0; i < sol.size(); ++ i)
			  cout << sol[i] << " ";
			cout << endl;
            return;
        }
        else{
            for(int i = start; i < cand.size(); ++ i){
                if(!visited[i]){
                    visited[i] = true;
                    sol.push_back(cand[i]);
                    dfs(cand, coll, sol, visited, i + 1, k - 1);
                    sol.pop_back();
                    visited[i] = false;
                }
            }
        }
    }
    vector<vector<int> > combine(int n, int k) {
        vector<int> cand;
        for(int i = 1; i<= n; ++ i) cand.push_back(i);
        vector<vector<int> > res;
        vector<int> sol;
        vector<bool> visited(n, false);
        dfs(cand, res, sol, visited, 0, k);
        return res;
    }
int main(int argc, const char* argv[])
{
	combine(4, 2);
	return 0;
}
