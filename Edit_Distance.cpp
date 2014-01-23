/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Edit_Distance.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 11:10:41 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int minDistance(string word1, string word2) {
        int M = word1.length() + 1, N = word2.length() + 1;
        int **dp = new int*[M];
        for(int i = 0; i < M; ++ i) dp[i] = new int[N];
        dp[0][0] = 0;
        for(int i = 1; i < M; ++ i) dp[i][0] = i;
        for(int j = 1; j < N; ++ j) dp[0][j] = j;
        for(int i = 1; i < M; ++ i)
            for(int j = 1; j < N; ++ j){
                dp[i][j] = min(dp[i-1][j]+1, dp[i][j-1]+1);
                dp[i][j] = min(word1[i-1] == word2[j-1]?dp[i-1][j-1]:dp[i-1][j-1]+1, dp[i][j]);
            }
        int res = dp[M-1][N-1];
        for(int i = 0; i < M; ++ i) delete[] dp[i];
        delete[] dp;
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << minDistance("zoologicoarchaeologist", "zoogeologist") << endl;
	return 0;
}
