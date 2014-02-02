/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : First_Missing_Positive.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Fri Jan 31 15:34:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int firstMissingPositive(int A[], int n) {
        int i = 0;
        while(i < n){
            if(A[i] > 0 && A[i] <= n && A[A[i]-1] != A[i]) // bucket sort
                swap(A[i], A[A[i]-1]);
            else i++;
        }
        for(i = 0; i < n; ++ i)
            if(A[i] != i+1)
                return i+1;
        return i+1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
