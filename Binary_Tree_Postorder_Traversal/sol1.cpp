/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Binary_Tree_Postorder_Traversal.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 21:07:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    struct frame{
        TreeNode* node;
        bool left, right;
        frame(TreeNode *n) : node(n), left(false), right(false) {}
    };
    vector<int> postorderTraversal(TreeNode *root) {
        stack<frame > sta;
        vector<int> res;
        sta.push(frame(root));
        while(!sta.empty()){
            frame &f = sta.top();
            if(!f.node){
                sta.pop();
                continue;
            }
            if(f.left&&f.right){
                res.push_back(f.node->val);
                sta.pop();
            }
            else if(!f.left){
                f.left = true;
                sta.push(frame(f.node->left));
            }
            else if(!f.right){
                f.right = true;
                sta.push(frame(f.node->right));
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
