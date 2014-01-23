/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Minimum_Depth_of_Binary_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 17:34:28 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int minDepth(TreeNode *root) {
        if(!root) return 0;
        queue<pair<TreeNode*, int>> que;
        que.push(make_pair(root, 1));
        while(!que.empty()){
            pair<TreeNode*, int> p = que.front();
            que.pop();
            TreeNode *r = p.first;
            int dep = p.second;
            if(!r->left&&!r->right) return dep;
            if(r->left)
                que.push(make_pair(r->left, dep+1));
            if(r->right)
                que.push(make_pair(r->right, dep+1));
        }
        return 0;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
