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
        TreeLinkNode *ptr = root, *prev, *next;
        while(ptr->left){
            next = ptr->left;
            prev = NULL;
            while(ptr){
                if(prev)
                    prev->next = ptr->left;
                ptr->left->next = ptr->right;
                prev = ptr->right;
                ptr = ptr->next;
            }
            ptr = next;
        }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
