/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Unique_Binary_Search_Trees_II.cpp
* Purpose :
* Creation Date : 18-01-2014
* Last Modified : Sat Jan 18 14:30:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<TreeNode *> dfs(int s, int e) {
        vector<TreeNode *> res;
        if(s>e)
            res.push_back(NULL);
        else{
            for(int i = s; i <= e; ++ i){
                vector<TreeNode *> left = dfs(s, i-1);
                vector<TreeNode *> right = dfs(i+1, e);
                for(int j = 0; j < left.size(); ++ j)
                    for(int k = 0; k < right.size(); ++ k){
                        TreeNode *root = new TreeNode(i);
                        root->left = left[j];
                        root->right = right[k];
                        res.push_back(root);
                    }
            }
        }
        return res;
    }
    vector<TreeNode *> generateTrees(int n) {
        return dfs(1, n);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
