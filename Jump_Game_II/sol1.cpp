/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Jump_Game_II.cpp
* Purpose : sub-greedy algorithm
* Creation Date : 06-01-2014
* Last Modified : Fri Jan 31 17:26:39 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <queue>
     int jump(int A[], int n) {
        int step = 0, start, end;
        for(int i = 0; i < n - 1; ++ i){
            int len = A[i];
            start = i+1; end = i + A[i]; // furthest position can reach
            if(end >= n-1) {step ++; break;} // get the result
            int max = 0;
            for (int j = start; j <= end; ++ j) // select the point that can jump furthest
                if(j+A[j] > max){
                    max = j + A[j];
                    i = j - 1;
                }
            step ++;
        }
        return step;
    }
int main(int argc, const char* argv[])
{
	int A[] = {2,3,1,1,4};
	cout << jump(A, 5) << endl;
	return 0;
}
