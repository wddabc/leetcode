/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Reverse_Integer.cpp
* Purpose : String based approach
* Creation Date : 17-12-2013
* Last Modified : Mon Nov 24 16:07:50 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
int reverse(int x) {
    bool neg = x<0;
    if(neg) x = -x;
   stringstream s;
    s << x;
    string inv = "", xs = s.str();
    for(int i = xs.length()-1; i >= 0; --i)inv+=xs[i];
    int res = neg?-atoi(inv.c_str()):atoi(inv.c_str());
    return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
