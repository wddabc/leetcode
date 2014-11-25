#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 01:49:35 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
def dfs(s, l, r, v, n):
    if l == n and r == n:
        v += [s]
        return
    if l < n:
        dfs(s+'(', l+1, r, v, n)
    if r < l:
        dfs(s+')', l, r+1, v, n)
class Solution:
    # @param an integer
    # @return a list of string
    def generateParenthesis(self, n):
        res = []
        dfs('', 0, 0, res, n)
        return res

def main():
	s = Solution()
	l = s.generateParenthesis(4)
	print l
if __name__ == "__main__": main()
