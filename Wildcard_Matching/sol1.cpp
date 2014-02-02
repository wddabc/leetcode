/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Wildcard_Matching.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Fri Jan 31 17:10:07 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isMatch(const char *s, const char *p) {
        const char *p_anchor = NULL, *s_anchor = NULL;
        while(*s){
            if(*s == *p || *p == '?'){// match *s with *p
                s++; p++;
            }
            else if(*p == '*'){ // find a pool can throw junks
                while(*p == '*') p++;
                if(!*p) return true;
                p_anchor = p;
                s_anchor = s;
            }
            else if(p_anchor){ // if no match
                s = ++s_anchor;// throw s_anchor into pool, re start 
                p = p_anchor;// goback
            }
            else return false;
        }
        while(*p)
            if(*p++ != '*') return false;
        return true;
    }
int main(int argc, const char* argv[])
{
	cout << isMatch1("ab", "*?") << endl;
	return 0;
}
