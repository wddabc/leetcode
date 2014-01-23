/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Climbing_Stairs.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 00:54:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int n1 = 1, n2 = 2;
        for(int i = 3; i <= n; ++ i){
            int tmp = n1 + n2;
            n1 = n2;
            n2 = tmp;
        }
        return n2;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
