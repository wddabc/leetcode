/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Path_Sum_II.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 17:55:53 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<vector<int> > &cand, vector<int> &sol, TreeNode *root, int sum){
        if(!root) return;
        sol.push_back(root->val);
        if(sum == root->val&&!root->left&&!root->right){
            cand.push_back(sol);
            sol.pop_back();
            return;
        }
        if(root->left) dfs(cand, sol, root->left, sum-root->val);
        if(root->right) dfs(cand, sol, root->right, sum-root->val);
        sol.pop_back();
    }
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > res;
        vector<int> sol;
        dfs(res, sol, root, sum);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
