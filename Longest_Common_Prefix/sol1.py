#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 21:39:30 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a string
    def longestCommonPrefix(self, strs):
        min_len = 100000
        if not len(strs): return ""
        for s in strs:
            if min_len > len(s):
                min_len = len(s)
        res = ""
        for i in range(0, min_len):
            c, flag = strs[0][i], True
            for s in strs[1:]:
                if s[i] != c: 
                    flag = False
                    break
            if not flag: break
            res += c
        return res

def main():
	s = Solution()
if __name__ == "__main__": main()
