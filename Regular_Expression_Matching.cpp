/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Regular_Expression_Matching.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Fri Jan  3 17:39:23 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
bool isMatch(const char *s, const char *p) {
	if (*p == '\0') return *s == '\0';
	if (*(p+1) != '*')
	{
		if (*s != '\0'&&(*s == *p || *p == '.')) return isMatch(s+1, p+1);
		else return false;
	}
	else{
		while (*s != '\0'&&(*s == *p || *p == '.'))
		{
			if(isMatch(s, p+2)) return true;
			s ++;
		}
	}
	return isMatch(s, p+2);
}
int main(int argc, const char* argv[])
{
	return 0;
}
