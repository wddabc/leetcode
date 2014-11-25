#! /usr/bin/python
# --------------------------------------- 
# File Name : sol2.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 16:04:15 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a string
    def convert(self, s, nRows):
        if nRows == 1: return s
        res = ""
        for i in range(0, nRows):
            j = 0;
            while 1:
                idx = i + j*2*(nRows-1)
                idx_b = idx - 2*i
                if idx_b > 0 and idx_b < len(s) and i and i != nRows-1:
                    res += s[idx_b]
                if idx < len(s):
                    res += s[idx]
                else: break
                j += 1
        return res
if __name__ == "__main__": main()
