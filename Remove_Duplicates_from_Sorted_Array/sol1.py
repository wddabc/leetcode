#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 13:25:54 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        n = len(A)
        if not n: return 0
        res, anchor = 1, 1
        for i in range(1,n):
            if A[i] != A[i-1]:
                A[anchor] = A[i]
                anchor += 1
        return anchor
        
if __name__ == "__main__": main()
