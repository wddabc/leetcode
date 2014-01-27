/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Roman_to_Integer.cpp
* Purpose : AC on first submission
* Creation Date : 03-01-2014
* Last Modified : Sun Jan 26 19:37:18 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int romanToInt(string s) {
        map<char, int> dict;
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;
        int res = 0;
        for(int i = 0; i < s.length(); ++ i){
            if (i < s.length() - 1){// minus "1" ahead of the "5" and "10"s
                if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) { res -= 100; continue;}
                if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) { res -= 10; continue;}
                if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) { res -= 1; continue;}
            }
            res += dict[s[i]];
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << romanToInt("MMMX") << endl;
	return 0;
}
