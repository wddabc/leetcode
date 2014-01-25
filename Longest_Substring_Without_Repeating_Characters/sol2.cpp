/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Substring_Without_Repeating_Characters.cpp
* Purpose :
* Creation Date : 17-12-2013
* Last Modified : Sat Jan 25 18:30:52 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
//O(n) solution
int lengthOfLongestSubstring(string s) {
	map<char, int> c2idx;
	int max = 0, start = 0, len;
	for(int j = 0; j < s.length() + 1; ++ j){ //s.length()+1 is for corner case, where we need to update len based on the last "start"
	  	len = j - start;
		if(j == s.length()) break;
	  	if(c2idx.find(s[j]) != c2idx.end()&&c2idx[s[j]] >= start){ //c2idx[s[j]] >= start repeat occurs in the current scope
	  		if(len > max) max = len;
	  		start = c2idx[s[j]] + 1;
	  	}
	  	c2idx[s[j]] = j;
	}
	if(len > max) max = len;
	return max;
}
int main(int argc, const char* argv[])
{
	cout << lengthOfLongestSubstring("qopubjguxhxdipfzwswybgfylqvjzhar") << endl;
	return 0;
}
