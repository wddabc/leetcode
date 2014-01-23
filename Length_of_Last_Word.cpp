/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Length_of_Last_Word.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 13:37:16 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int lengthOfLastWord(const char *s) {
        int len = strlen(s) - 1;
        int res = 0;
        while(len >= 0 && s[len] == ' ') len--;
        while(len >= 0 && s[len--] != ' ') res++;
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
