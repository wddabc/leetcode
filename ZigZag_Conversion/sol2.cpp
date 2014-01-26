/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : in-place solution
* Creation Date : 26-01-2014
* Last Modified : Sun Jan 26 12:21:15 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string convert(string s, int nRows) {
        if(nRows == 1) return s;
        string res = "";
        for(int i = 0; i < nRows; ++ i){ //search by row
            for(int j = 0; ; ++ j){
                int idx = i+2*(nRows-1)*j;//the string idx for the row is i+2*(nRows-1)*j
                int itv = idx - 2*i;//the string idx before is idx - 2*i
                if(i != 0 && i != nRows-1 && itv >= 0 && itv < s.length())
                    res += s[itv];
                if(idx < s.length())
                    res += s[idx];
                else
                    break;
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
