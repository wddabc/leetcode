/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Valid_Parentheses.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 00:31:27 2014
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
        vector<char> sta;
        sta.push_back('#');
        for(int i = 0; i < s.length(); ++ i){
			cout << s[i] << endl;
			cout<<sta.size() << endl;
            if(match(sta.back(), s[i])) sta.pop_back();
            else sta.push_back(s[i]);
        }
		cout<<sta.size() << endl;
        if(sta.size() == 1) return true;
        else return false;
        return false;
    }
int main(int argc, const char* argv[])
{
	cout << isValid("[][][]{}{}{}") << endl;
	return 0;
}
