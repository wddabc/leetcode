/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Level_Order_Traversal.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 02:06:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > res;
        if(!root) return res;
        queue<vector<TreeNode *> > que;
        que.push(vector<TreeNode*>(1, root));
        while(!que.empty()){
            vector<TreeNode *> cur = que.front();
            que.pop();
            vector<int> tmp;
            vector<TreeNode *> new_lev;
            for(int i = 0; i < cur.size(); ++ i){
                if(cur[i]){
                    tmp.push_back(cur[i]->val);
                    new_lev.push_back(cur[i]->left);
                    new_lev.push_back(cur[i]->right);
                }
            }
            if(!new_lev.empty()){
                res.push_back(tmp);
                que.push(new_lev);
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
