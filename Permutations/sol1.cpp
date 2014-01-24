/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Permutations.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 10:45:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<vector<int> > &coll, vector<int> &num, vector<int> &sol, vector<bool> &visited, int rem){
        if (!rem){
            coll.push_back(sol);
            return;
        }
        for (int i = 0; i < num.size(); ++ i){
            if(visited[i]) continue;
            visited[i] = true;
            rem --;
            sol.push_back(num[i]);
            dfs(coll, num, sol, visited, rem);
            sol.pop_back();
            visited[i] = false;
            rem ++;
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > res;
        vector<int> sol;
        vector<bool> visited(num.size(), false);
        int rem = num.size();
        dfs(res, num, sol, visited, rem);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
