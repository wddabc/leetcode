/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Remove_Duplicates_from_Sorted_Array.cpp
* Purpose : Refined code
* Creation Date : 04-01-2014
* Last Modified : Mon Jan 27 20:47:59 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int removeDuplicates(int A[], int n) {
        if(n == 0) return 0;
        int res = 1, anchor = 1;
        for(int i = 1; i < n; ++ i)
            if(A[i] != A[i-1])
                A[anchor++] = A[i];
        return anchor;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
