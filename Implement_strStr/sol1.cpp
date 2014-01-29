/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose : exact match, O(mn)
* Creation Date : 27-01-2014
* Last Modified : Mon Jan 27 21:48:53 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    char *strStr(char *haystack, char *needle) {
        int ln = strlen(needle);
        if(*needle == '\0') return haystack;
        if(ln == 0) return haystack;
        while(*haystack != '\0'){
            if (strlen(haystack) < ln) return NULL;
            if(*haystack == *needle){
                bool flag = true;
                for(int i = 0; i < ln; ++ i)
                    if(*(haystack+i)!=*(needle+i)){flag = false; break;}
                if(flag) return haystack;
            }
            haystack ++;
        }
        return NULL;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
