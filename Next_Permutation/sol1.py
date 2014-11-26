#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 19:33:27 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param num, a list of integer
    # @return a list of integer
    def nextPermutation(self, num):
        bound = len(num) - 1
        while bound > 0 and num[bound-1] >= num[bound]:
            bound -= 1
        if not bound: 
            return sorted(num)
        idx = bound
        while idx < len(num)-1 and num[idx+1] > num[bound-1]:
            idx += 1
        tmp = num[bound-1]
        num[bound-1] = num[idx]
        num[idx] = tmp
        num[bound:len(num)] = sorted(num[bound:len(num)])
        return num
if __name__ == "__main__": main()
