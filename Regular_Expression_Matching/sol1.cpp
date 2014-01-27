/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Regular_Expression_Matching.cpp
* Purpose : Recursion solution
* Creation Date : 03-01-2014
* Last Modified : Sun Jan 26 19:04:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
bool isMatch(const char *s, const char *p) {
	if (*p == '\0') return *s == '\0';
	if (*(p+1) != '*') { // have to exact match, if ok. align s and p
		if (*s != '\0'&&(*s == *p || *p == '.')) return isMatch(s+1, p+1);
		else return false;
	}
	else{ 
		while (*s != '\0'&&(*s == *p || *p == '.')){
			if(isMatch(s, p+2)) return true; // use '*' to eat the same symbol
			s ++;
		}
	}
	return isMatch(s, p+2); // only *(p+1) == '*' can reach here, this is try mathing 0 *p
}
int main(int argc, const char* argv[])
{
	return 0;
}
