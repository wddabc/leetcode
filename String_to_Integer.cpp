/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : String_to_Integer.cpp
* Purpose :
* Creation Date : 17-12-2013
* Last Modified : Wed Dec 18 02:00:30 2013
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
bool is_num(char c){
    return (c >= '0'&&c <= '9');
}
bool out_of_range(string str, bool neg){
	cout << str << endl;
	string cmp = neg?"2147483648":"2147483647";
	if(str.length() > cmp.length()) return 1;
	if(str.length() < cmp.length()) return 0;
	for(int i = 0; i < str.length(); ++ i){
		if(str[i] < cmp[i]) return 0;
		if(str[i] > cmp[i]) return 1;
	}
	return 1;
}
int atoi1(const char *str) {
    bool neg = 0;
    int start = 0;
    if(str == "")return 0;
    while(str[start] == ' ' )start ++;
    if(str[start] == '-'){
        neg = 1;
        start++;
    }
    if(str[start] == '+') start++;
    int res = 0;
    while(str[start] == '0' )start ++;
	int idx = start;
    for(; idx < strlen(str); ++ idx){
        if((idx == start&&!is_num(str[idx])))return 0;
        if(!is_num(str[idx]))break;
        res *= 10;
        res += str[idx]-'0';
    }
	stringstream ss;
	ss << str;
	if(out_of_range(ss.str().substr(start, idx - start), neg)){
		if (neg) return -2147483648;
		return 2147483647;
	}
    return (neg?-res:res);
}
int main(int argc, const char* argv[])
{
	cout << atoi1("1095502006p8") << endl;
	return 0;
}
