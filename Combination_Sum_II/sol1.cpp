/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Combination_Sum_II.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Fri Jan 31 14:56:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<vector<int> > &collection, vector<int> &solution, vector<int> &num, int start, int target){
        if (target == 0){
            collection.push_back(solution);
            return;
        }
        for(int i = start; i < num.size(); ++ i){
            if(target >= num[i]){
                solution.push_back(num[i]);
                dfs(collection, solution, num, i+1, target-num[i]);
                solution.pop_back();
                while(i + 1 < num.size() && num[i+1] == num[i]) i++; // skip duplications
            }
        }
    }
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        vector<vector<int> > res;
        vector<int> sol;
        sort(num.begin(), num.end());
        dfs(res, sol, num, 0, target);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
