/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Symmetric_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 01:22:11 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
    bool isSymmetric(TreeNode *root) {
        if(!root) return true;
        TreeNode *ptrl = root->left, *ptrr = root->right;
        while(ptrl&&ptrr){
				cout << ptrl->val << " " << ptrr->val << endl;
            if(ptrl->val!=ptrr->val) return false;
            if(ptrl->left){
                if(!ptrr->left) return false;
                TreeNode *tmpl = ptrl->left, *tmpr = ptrr->left;
                while(tmpl->right && tmpl->right!=ptrl) tmpl = tmpl->right;
                while(tmpr->right && tmpr->right!=ptrr) tmpr = tmpr->right;
                if(!tmpl->right){
                    if(tmpr->right) return false;
                    tmpl->right = ptrl;
                    tmpr->right = ptrr;
                    ptrl = ptrl->left;
                    ptrr = ptrr->left;
                }else{
                    if(!tmpr->right) return false;
                    tmpl->right = NULL;
                    tmpr->right = NULL;
                    ptrl = ptrl->right;
                    ptrr = ptrr->right;
                }
            }else{
                if(ptrr->left) return false;
                ptrl = ptrl->right;
                ptrr = ptrr->right;
            }
        }
        if(!ptrl&&!ptrr) return true;
        return false;
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
