/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Combination_Sum.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 10:33:47 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<vector<int> > &cand, vector<int> &current, int start, vector<int> &candidates, int target) {
        if(target == 0){
            cand.push_back(current);
            return;
        }
        for(int i = start; i < candidates.size(); ++ i){
            if(target < candidates[i]) break;
            current.push_back(candidates[i]);
            dfs(cand, current, i, candidates, (target - candidates[i]));
            current.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> > res;
        sort(candidates.begin(), candidates.end());
        vector<int> sol;
        dfs(res, sol, 0, candidates, target);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
