/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : KMP algorithm
* Creation Date : 28-01-2014
* Last Modified : Tue Jan 28 19:49:12 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
    int *gen_next(char *needle){
        int l = strlen(needle), *next = new int[l], k = -1, i = 0;
        next[0] = -1;
        while(i < l-1){
            if(k == -1 || needle[k] == needle[i]){
                if(needle[++k] == needle[++i]){
                    next[i] = next[k];
                }else
                   next[i] = k; 
            } else 
                k = next[k];
        }
        return next;
    }
    char *strStr(char *haystack, char *needle) {
        if(!haystack || !needle) return NULL;
        int nl = strlen(needle);
        if(!nl) return haystack;
        int *next = gen_next(needle), idx = 0;
        while(*haystack != '\0'){
            bool flag = true;
            if(idx == -1 || *haystack == needle[idx]){
                haystack ++;
                idx ++;
            }else
                idx = next[idx];
            if(idx == nl) return haystack-nl;
        }
        delete[] next;
        return NULL;
    }
int main(int argc, const char* argv[])
{
	char a[] = "a";
	char b[] = "a";
	cout << strStr(a, b) << endl;
	return 0;
}
