/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Populating_Next_Right_Pointers_in_Each_Node_II.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 23:12:28 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void connect(TreeLinkNode *root) {
        if(!root) return;
        root->next = NULL;
        TreeLinkNode *ptr = root, *new_level = root;
        while(ptr){
            new_level = NULL;
            TreeLinkNode *prev = NULL;
            while(ptr){
                if(!new_level){
                    if(ptr->left) new_level = ptr->left;
                    else if(ptr->right) new_level = ptr->right;
                }
                if(ptr->left){
                    if(prev) prev->next = ptr->left;
                    prev = ptr->left;
                }
                if(ptr->right){
                    if(prev) prev->next = ptr->right;
                    prev = ptr->right;
                }
                ptr = ptr->next;
            }
            if(!prev) break;
            prev->next = NULL;
            ptr = new_level;
        }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
