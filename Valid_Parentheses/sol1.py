#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 01:37:31 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __match(self, c1, c2):
        if (c1 == '('): return c2 == ')'
        if (c1 == '{'): return c2 == '}'
        if (c1 == '['): return c2 == ']'
        return False
        
    # @return a boolean
    def isValid(self, s):
        if (len(s)&1): return False
        sta = ['#']
        for c in s:
            if(self.__match(sta[-1], c)): sta.pop()
            else: sta += [c]
        if len(sta) == 1:
            return True
        return False

if __name__ == "__main__": main()
