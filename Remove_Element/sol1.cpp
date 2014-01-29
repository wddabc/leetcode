/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 27-01-2014
* Last Modified : Mon Jan 27 21:39:19 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int removeElement(int A[], int n, int elem) {
        int idx = 0, anchor = 0;
        for (int i = 0; i < n; ++ i)
            if(A[i] != elem)
                A[anchor++] = A[i];
        return anchor;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
