/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : integer-based approach
* Creation Date : 26-01-2014
* Last Modified : Sun Jan 26 12:32:41 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int reverse(int x) {
        int digit = 0, res = 0;
        while(x != 0){
            digit = x%10;
            res = res*10 + digit;
            x/=10;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
