/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Wildcard_Matching.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 19:30:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isMatch(const char *s, const char *p) {
        if(*p == '\0') return *s == '\0';
        if(*s != '\0' && (*s == *p || *p == '?')) return isMatch(s+1, p+1);
        if(*p == '*'){
			while(*(p+1) == '*')p++;
            while(1){
                if(isMatch(s,p+1)) return true;
				if(*s == '\0') break;
                s++;
            }
        }
        return false;
    }
    bool isMatch1(const char *s, const char *p) {
        const char *start = p, *end = start;
        bool new_piece = true;
        while(1){
            if(new_piece){
                start = end;
				if(*start == '\0' && *s != '\0') return false;
                while(*start == '*') ++ start;
                end = start;
                while(*end != '*' && *end != '\0') ++ end;
                new_piece = false;
                if(*start == '\0') return true;
            }
			if(*s == '\0') break;
            if(*s == *start || *start == '?'){
                bool flag = (strlen(s) >= end-start);
                if(flag){
                    for(int i = 0; i < end-start; ++ i){
                        if(*(s+i) != *(start + i)&&*(start + i)!='?'){
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag){
                    new_piece = true;
                    s += (end-start);
                    continue;
                }
            }
            s++;
        }
        return false;
    }
int main(int argc, const char* argv[])
{
	cout << isMatch1("ab", "*?") << endl;
	return 0;
}
