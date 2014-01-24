/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Jump_Game_II.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Tue Jan  7 09:32:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <queue>
     int jump(int A[], int n) {
        int step = 0, start, end;
        for(int i = 0; i < n - 1; ++ i){
            int len = A[i];
            start = i+1; end = i + A[i];
            if(end >= n-1) {step ++; break;}
            int max = 0;
            for (int j = start; j <= end; ++ j)
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
