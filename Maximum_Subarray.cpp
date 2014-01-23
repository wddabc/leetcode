/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Maximum_Subarray.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 23:18:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxSubArray(int A[], int n) {
        int max_s = INT_MIN, tmp = max_s;
        for (int i = 0; i <= n; ++ i){
            if((i == n||A[i] < 0) && tmp > max_s)
                max_s = tmp;
            tmp = max(tmp, 0);
            tmp += A[i];
        }
        return max_s;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
