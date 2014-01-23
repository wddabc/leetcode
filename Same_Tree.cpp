/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Same_Tree.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 00:15:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(!p&&!q) return true;
        if(!(p&&q)) return false;
        if(p->val!=q->val) return false;
        return isSameTree(p->left, q->left)&&isSameTree(p->right,q->right);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
