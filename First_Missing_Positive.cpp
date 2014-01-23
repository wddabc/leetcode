/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : First_Missing_Positive.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 12:52:30 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int firstMissingPositive(int A[], int n) {
        for(int i = 0; i < n; ++ i){
            int idx = i;
            while(A[idx] > 0 && A[idx] <= n && A[idx] != idx + 1 && A[idx] != A[A[idx]-1])
                swap(A[idx], A[A[idx]-1]);
        }
        int i;
        for (i = 0; i< n; ++ i)
            if(A[i] != i + 1) break;
        return i+1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
