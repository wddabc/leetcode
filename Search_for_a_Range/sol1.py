#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 21:50:03 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param A, a list of integers
    # @param target, an integer to be searched
    # @return a list of length 2, [index1, index2]
    def searchRange(self, A, target):
        l, r, s, e = 0, len(A) - 1, -1, -1
        while l <= r:
            if A[l] == target:
                s = l; break
            if l == r: break
            mid = (l+r)/2
            if A[mid] >= target:
                r = mid
            else:
                l = mid + 1
        l, r = 0, len(A) - 1
        while l <= r:
            if A[r] == target:
                e = r; break
            if l == r: break
            mid = (l+r)/2
            if A[mid+1] <= target:
                l = mid + 1
            else:
                r = mid
        return [s, e]
if __name__ == "__main__": main()
