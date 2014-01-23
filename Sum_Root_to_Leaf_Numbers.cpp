/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sum_Root_to_Leaf_Numbers.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 21:55:55 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void gen_path(TreeNode *root, int sum, vector<int> &path_s){
        if(!root) return;
        if(!root->left&&!root->right) return path_s.push_back(sum+root->val);
        if(root->left) gen_path(root->left, 10*(sum+root->val), path_s);
        if(root->right) gen_path(root->right, 10*(sum+root->val), path_s);
    }
    int sumNumbers(TreeNode *root) {
        vector<int> pathv;
        gen_path(root, 0, pathv);
        int res = 0;
        for(int i = 0; i < pathv.size(); ++ i)
            res += pathv[i];
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
