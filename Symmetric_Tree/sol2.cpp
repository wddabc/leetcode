/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Symmetric_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 01:22:11 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isSymmetric(TreeNode *left, TreeNode *right){
        if(!left&&!right) return true;
        if(!(left&&right)) return false;
        if(left->val != right->val) return false;
        return isSymmetric(left->left, right->right)&&isSymmetric(left->right, right->left);
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
