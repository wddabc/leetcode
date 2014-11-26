#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 21:54:00 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param A, a list of integers
    # @param target, an integer to be inserted
    # @return integer
    def searchInsert(self, A, target):
        l, r = 0, len(A)-1
        while l <= r:
            mid = (l+r)/2
            if A[mid] == target: return mid
            if A[mid] > target:
                r = mid - 1
            else:
                l = mid + 1
        return l
if __name__ == "__main__": main()
