/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Search_for_a_Range.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Sun Jan  5 18:57:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> searchRange(int A[], int n, int target) {
        int l = 0, r = n - 1, mid = (l+r)/2, s = -1, e = -1;
        while(l <= r){
            if(A[l] == target){s = l; break;}
            if(l == r){break;}
            mid = (l+r)/2;
            if(A[mid] >= target){ r = mid; continue; }
            else {l = mid + 1; continue; }
        }
        l = 0, r = n - 1, mid = (l+r)/2;
        while(l <= r){
            if(A[r] == target){e = r; break;}
            if(l == r){break;}
            mid = (l+r)/2;
            if(A[mid + 1] <= target){ l = mid+1; continue; }
            else {r = mid; continue; }
        }
        vector<int> res;
        res.push_back(s);
        res.push_back(e);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
