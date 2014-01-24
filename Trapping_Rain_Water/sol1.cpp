/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Trapping_Rain_Water.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 13:43:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int trap(int A[], int n) {
        int *lh = new int[n], *rh = new int[n];
        if(n < 3) return 0;
        lh[0] = 0;
        for(int i = 1; i < n; ++ i)
            lh[i] = max(A[i-1], lh[i-1]);
        rh[n-1] = 0;
        for(int i = n-2; i >= 0; --i)
            rh[i] = max(A[i+1], rh[i+1]);
        int res = 0;
        for(int i = 0; i < n; ++ i)
            res += max(min(lh[i], rh[i]) - A[i], 0);
        return res;
    }
    int trap(int A[], int n) {
        int *lh = new int[n];
        if(n < 3) return 0;
        lh[0] = 0;
        for(int i = 1; i < n; ++ i)
            lh[i] = max(A[i-1], lh[i-1]);
        int res = 0, rh = A[n-1];
        for(int i = n-2; i >= 0; --i){
            res += max(min(lh[i], rh) - A[i], 0);
            if(A[i] > rh) rh = A[i];
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
