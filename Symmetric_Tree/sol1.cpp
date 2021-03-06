/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Symmetric_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Tue Feb  4 17:26:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isSymmetricItr(TreeNode *left, TreeNode *right){
        queue<TreeNode*> ql, qr;
        ql.push(left);
        qr.push(right);
        while(ql.size()&&qr.size()){
            TreeNode *l = ql.front(), *r = qr.front();
            ql.pop();
            qr.pop();
            if(!l&&!r) continue;
            if((!l&&r)||(l&&!r)||(l->val != r->val)) return false;
            if(l&&r){
                ql.push(l->left);
                ql.push(l->right);
                qr.push(r->right);
                qr.push(r->left);
            }
        }
        return !ql.size()&&!qr.size();
    }
    bool isSymmetric(TreeNode *root) {
        if(!root) return true;
        return isSymmetricItr(root->left, root->right);
    }
int main(int argc, const char* argv[])
{
	TreeNode *root = new TreeNode(2);
	root->left = new TreeNode(3);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(5);
	cout << isSymmetric(root) << endl;
	return 0;
}
