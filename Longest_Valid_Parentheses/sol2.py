#!/usr/bin/python
# --------------------------------------- 
# File Name : sol2.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 20:22:38 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param s, a string
    # @return an integer
    def longestValidParentheses(self, s):
        sta, max_len = [], 0
        for i, val in enumerate(s):
            if not len(sta) or val == '(' or sta[-1][0] == ')':
                sta += [(val, i)]
            else:
                sta.pop()
                tmp_len = i - (sta[-1][1] if len(sta) else -1)
                if tmp_len > max_len:
                    max_len = tmp_len
        return max_len
if __name__ == "__main__": main()
