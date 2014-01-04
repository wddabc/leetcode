/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Container_With_Most_Water.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Fri Jan  3 18:10:43 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
int maxArea(vector<int> &height) {
	int max_res = 0, l = 0, r = height.size() - 1;
	while(l < r){
		max_res = max(min(height[l], height[r])*(r-l), max_res);
		if (height[l] < height[r]) 
		{
			int lh = height[l];
			while(l < r && height[l] <= lh) l++;
		}else {
			int rh = height[r];
			while(l < r && height[r] <= rh) r--;
		}
	}
	return max_res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
