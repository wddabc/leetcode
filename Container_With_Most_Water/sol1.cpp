/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Container_With_Most_Water.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Sun Jan 26 19:19:21 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
int maxArea(vector<int> &height) {
	int max_res = 0, l = 0, r = height.size() - 1;
	while(l < r){
		max_res = max(min(height[l], height[r])*(r-l), max_res); //update the result
		if (height[l] < height[r]) { // fix the higher one, and only increase the l or decrease the r
			int lh = height[l];
			while(l < r && height[l] <= lh) l++; // only the height[l] > lh can results in larger container as the width is getting smaller
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
