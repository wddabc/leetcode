/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Flatten_Binary_Tree_to_Linked_List.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 18:23:39 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void flatten(TreeNode *&root, TreeNode *&tail){
        if(!root) return;
        if(!root->left&&!root->right){
            tail = root;
            return;
        }
        TreeNode *t = NULL;
        flatten(root->left, t);
        TreeNode *lt = t;
        flatten(root->right, t);
        TreeNode *rt = t;
        if(lt){
            lt->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }
        tail = rt;
    }
    void flatten(TreeNode *root) {
        TreeNode *tail = NULL;
        flatten(root, tail);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
