#! /usr/bin/python
# --------------------------------------- 
# File Name : sol2.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 19:24:22 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a boolean
    def isMatch(self, s, p):
        m, n = len(s), len(p)
        dp = [[False]*(n+1) for i in range(0, m+1)]
        dp[0][0] = True
        for j in range(1, n+1):
            if p[j-1] == '*':
                dp[0][j] = dp[0][j-2];
        for i in range(1, m+1):
            for j in range(1,n+1):
                if s[i-1] == p[j-1] or p[j-1] == '.':
                    dp[i][j] = dp[i-1][j-1]
                elif p[j-1] == '*':
                    if s[i-1] == p[j-2] or p[j-2] == '.':
                        dp[i][j] = dp[i-1][j]
                    dp[i][j] = dp[i][j] or dp[i][j-2]
        return dp[m][n]

def main():
	s=Solution()
	print s.isMatch('aa', 'a')
if __name__ == "__main__": main()
