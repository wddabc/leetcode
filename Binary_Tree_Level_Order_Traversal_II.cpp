/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Level_Order_Traversal_II.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 12:36:35 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> >res;
        queue<vector<TreeNode*> >que;
        que.push(vector<TreeNode*>(1,root));
        while(!que.empty()){
            vector<TreeNode*> cur = que.front();
            que.pop();
            vector<int> tmp;
            vector<TreeNode*> new_lev;
            for(int i = 0; i < cur.size(); ++ i)
                if(cur[i]){
                    tmp.push_back(cur[i]->val);
                    new_lev.push_back(cur[i]->left);
                    new_lev.push_back(cur[i]->right);
                }
            if(!new_lev.empty()){
                que.push(new_lev);
                res.insert(res.begin(), tmp);
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
