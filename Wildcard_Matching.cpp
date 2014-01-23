/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Wildcard_Matching.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 19:30:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isMatch(const char *s, const char *p) {
        const char *p_anchor = NULL, *s_anchor = NULL;
        while(*s){
            if(*s == *p || *p == '?'){
                s++; p++;
            }
            else if(*p == '*'){
                while(*p == '*') p++;
                if(!*p) return true;
                p_anchor = p;
                s_anchor = s;
            }
            else if(p_anchor){
                s = s_anchor++; 
                p = p_anchor;
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
