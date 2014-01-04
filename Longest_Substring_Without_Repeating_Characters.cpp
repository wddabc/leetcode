/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Substring_Without_Repeating_Characters.cpp
* Purpose :
* Creation Date : 17-12-2013
* Last Modified : Tue Dec 17 01:57:12 2013
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
bool check(string s) {
	set<char> a;
	for (int i = 0; i < s.length(); ++i)
	{
		if (a.find(s[i]) != a.end()) return false;
		a.insert(s[i]);
	}
	return true;
}
int lengthOfLongestSubstringN2(string s) {
	map<char, int> c2idx;
	int max = 0;
	for (int i = 0; i < s.length(); ++ i)
	  for(int j = i+1; j < s.length(); ++ j)
	  {
		  int len = j-i;
		  if(check(s.substr(i,j))&&len>max)max = len;
	  }
	return max;
}
int lengthOfLongestSubstring(string s) {
	map<char, int> c2idx;
	int max = 0, start = 0, len;
	for(int j = 0; j < s.length() + 1; ++ j)
	{
	  	len = j - start;
		if(j == s.length()) break;
	  	if(c2idx.find(s[j]) != c2idx.end()&&c2idx[s[j]] >= start)
	  	{
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
