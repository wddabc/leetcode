/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Substring_Without_Repeating_Characters.cpp
* Purpose :
* Creation Date : 17-12-2013
* Last Modified : Sat Jan 25 18:22:00 2014
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
//O(n^2) solution
int lengthOfLongestSubstring(string s) {
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
int main(int argc, const char* argv[])
{
	cout << lengthOfLongestSubstring("qopubjguxhxdipfzwswybgfylqvjzhar") << endl;
	return 0;
}
