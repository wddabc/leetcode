/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Valid_Parentheses.cpp
* Purpose : Stack
* Creation Date : 04-01-2014
* Last Modified : Sun Jan 26 20:40:31 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool match(const char c1, const char c2)
    {
        if (c1 == '(') return c2 == ')';
        if (c1 == '{') return c2 == '}';
        if (c1 == '[') return c2 == ']';
        return false;
    }
    bool isValid(string s) {
        if (s.length()&1)return false;
        stack<char> sta;
        sta.push('#');
        for(int i = 0; i < s.length(); ++ i){
            if(match(sta.top(), s[i])) sta.pop();
            else sta.push(s[i]);
        }
        if(sta.size() == 1) return true;
        return false;
    }
int main(int argc, const char* argv[])
{
	cout << isValid("[][][]{}{}{}") << endl;
	return 0;
}
