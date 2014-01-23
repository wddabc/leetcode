/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Construct_Binary_Tree_from_Preorder_and_Inorder_Traversal.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 11:04:53 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    TreeNode *build(vector<int> &preorder, vector<int> &inorder, int &idx, int begin, int end){
        if(begin == end) return NULL;
        int root_val = preorder[idx++];
        TreeNode *root = new TreeNode(root_val);
        for(int i = begin; i < end; ++ i){
            if(inorder[i] == root_val){
                root->left = build(preorder, inorder, idx, begin, i);
                root->right = build(preorder, inorder, idx, i+1, end);
                break;
            }
        }
        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        int idx = 0;
        return build(preorder, inorder, idx, 0, inorder.size());
    }
int main(int argc, const char* argv[])
{
	return 0;
}
