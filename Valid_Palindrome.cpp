/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Valid_Palindrome.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 11:38:07 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isPalindrome(string s) {
        string actual = "";
        for(int i = 0; i < s.length(); ++ i){
            if((s[i] >= 'a'&& s[i] <= 'z')||s[i] >= '0' && s[i] <= '9')
                actual += s[i];
            if(s[i] >= 'A'&&s[i] <= 'Z')
                actual += (char)'a'+s[i]-'A';
        }
        int start = 0, end = actual.size() - 1;
        while(start < end)
            if(actual[start++] != actual[end--]) return false;
        return true;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
