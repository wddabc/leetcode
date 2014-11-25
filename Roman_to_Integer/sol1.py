#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 21:22:08 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return an integer
    def romanToInt(self, s):
        my_dict, res = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}, 0
        for i in range(0, len(s)):
            if i < len(s) - 1:
                if s[i] == 'I' and (s[i+1] == 'V' or s[i+1] == 'X'):
                    res -= 1
                    continue
                if s[i] == 'X' and (s[i+1] == 'L' or s[i+1] == 'C'):
                    res -= 10
                    continue
                if s[i] == 'C' and (s[i+1] == 'D' or s[i+1] == 'M'):
                    res -= 100
                    continue
            res += my_dict[s[i]]
        return res

if __name__ == "__main__": main()
