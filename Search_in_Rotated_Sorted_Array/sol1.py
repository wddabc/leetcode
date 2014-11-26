#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 21:39:25 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param A, a list of integers
    # @param target, an integer to be searched
    # @return an integer
    def search(self, A, target):
        l, r = 0, len(A)-1
        while l <= r:
            mid = (l + r)/2
            if target == A[mid]: return mid
            if target >= A[l] and target < A[mid]:
                r = mid - 1
            elif target > A[mid] and target <= A[r]:
                l = mid + 1
            elif A[l] > A[mid]:
                r = mid - 1
            else:
                l = mid + 1
        return -1
if __name__ == "__main__": main()
