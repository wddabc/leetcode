/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 31-01-2014
* Last Modified : Fri Jan 31 17:34:24 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<vector<int> > &coll, vector<int> &num, vector<int> &sol, vector<bool> &visited, int rem){
        if(!rem){
            coll.push_back(sol);
            return;
        }
        for(int i = 0; i < num.size(); ++ i){
            if(visited[i]) continue;
            visited[i] = true;
            sol.push_back(num[i]);
            dfs(coll, num, sol, visited, rem - 1);
            sol.pop_back();
            visited[i] = false;
            while(i < num.size() - 1 && num[i+1] == num[i]) i ++;
        }
    }
    vector<vector<int> > permuteUnique(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<bool> visited(num.size(), false);
        vector<vector<int> > res;
        vector<int> sol;
        int rem = num.size();
        dfs(res, num, sol, visited, rem);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
