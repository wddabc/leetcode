/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Palindrome_Number.cpp
* Purpose :
* Creation Date : 18-12-2013
* Last Modified : Wed Dec 18 12:40:17 2013
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isPalindrome1(int x) {
        if(x < 0) return 0;
        if(x>=0 && x <=9) return 1;
        int div = 1;
        while(x/div >= 10) div *= 10;
        while(x > 0){
            int l = x/div;
            int r = x%10;
            if (l != r) return 0;
            x = (x%div)/10;
            div/= 100;
        }
        return 1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
