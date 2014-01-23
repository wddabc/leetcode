/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Populating_Next_Right_Pointers_in_Each_Node.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 22:22:27 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void connect(TreeLinkNode *root) {
        if(!root) return;
        root->next = NULL;
        TreeLinkNode *ptr = root, *next_level = root;
        while(ptr->left){
            next_level = ptr->left;
            TreeLinkNode *prev = NULL;
            while(ptr){
                if(prev)
                    prev->right->next = ptr->left;
                ptr->left->next = ptr->right;
                prev = ptr;
                ptr = ptr->next;
            }
            prev->right->next = NULL;
            ptr = next_level;
        }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
