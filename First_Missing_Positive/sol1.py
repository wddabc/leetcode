#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 26-11-2014
# Last Modified : Wed Nov 26 01:18:09 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param A, a list of integers
    # @return an integer
    def firstMissingPositive(self, A):
        i, n = 0, len(A)
        while i < n:
            if A[i] > 0 and A[i] <= n and A[i] != A[A[i]-1]:
                tmp = A[A[i]-1]
                A[A[i]-1] = A[i]
                A[i] = tmp
            else:
                i += 1
        j = 0
        while j < n:
            if j+1 != A[j]:
                return j + 1
            j += 1
        return j+1
if __name__ == "__main__": main()
