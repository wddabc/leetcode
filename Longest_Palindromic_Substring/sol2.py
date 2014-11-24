#! /usr/bin/python
# --------------------------------------- 
# File Name : sol2.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 12:15:25 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __transform(self, s):
        res_str = ""
        for c in s:
            res_str += "#"
            res_str += c
        res_str += "#"
        return res_str
    # @return a string
    def longestPalindrome(self, s):
        s = self.__transform(s)
        mid, scope = 0, 0
        p_len = [0]*len(s)
        for i, val in enumerate(s):
            p_len[i] = min(p_len[2*mid-i], scope-i+1) if scope > i else 1
            while i+p_len[i] < len(s) and i >= p_len[i] and s[i+p_len[i]] == s[i-p_len[i]]:
                p_len[i] += 1
            if i + p_len[i]-1 > scope:
                scope = i+p_len[i]-1
                mid = i
        max_l, res_str = 0, ""
        for i, val in enumerate(p_len):
            if val > max_l:
                max_l = val
                res_str = s[i-val+1:i+val]
        res = ""
        for c in res_str:
            if c != "#":
                res += c
        return res
if __name__ == "__main__": main()
