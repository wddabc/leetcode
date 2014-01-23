/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Single_Number_II.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 01:42:31 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int singleNumber(int A[], int n) {
        int one = 0, two = 0, three = 0;
        for(int i = 0; i < n; ++ i){
            two |= one&A[i];
            one ^= A[i];
            three = two&one;
            one &= ~three;
            two &= ~three;
        }
        return one;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
