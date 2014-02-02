/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Trapping_Rain_Water.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 13:43:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int trap(int A[], int n) {
        int res = 0;
        vector<int> lh(n, A[0]);
        for(int i = 1; i < n; ++ i)
            lh[i] = max(A[i], lh[i-1]);
        int rh = A[n-1];
        for(int i = n-2; i >= 0; -- i){
            rh = max(A[i], rh);
            res += min(rh, lh[i])-A[i];
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
