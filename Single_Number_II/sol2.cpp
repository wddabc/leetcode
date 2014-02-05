/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose :
* Creation Date : 05-02-2014
* Last Modified : Wed Feb  5 14:53:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int singleNumber(int A[], int n) {
        int one = 0, two = 0, zero = 0;
        for(int i = 0; i < n; ++ i){
            zero = ~(two|one);//if not appeared one time or two times, then not appeared
            two = (two&~A[i])|(one&A[i]);// already appreared 2 times and not appeared this time ot appeared one time and appeared again
            one = (one&~A[i])|(zero&A[i]); // already appreared 1 times and not appeared this time ot doesn't appeared and appeared 
        }
        return one;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
