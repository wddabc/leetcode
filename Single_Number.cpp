/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Single_Number.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Tue Jan 21 23:23:02 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int singleNumber(int A[], int n) {
        int res = 0;
        for(int i = 0; i < n; ++ i)
            res^=A[i];
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
