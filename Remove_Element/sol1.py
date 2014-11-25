#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 14:05:13 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param    A       a list of integers
    # @param    elem    an integer, value need to be removed
    # @return an integer
    def removeElement(self, A, elem):
        anchor = 0
        for i in range(len(A)):
            if A[i] != elem:
                A[anchor] = A[i]
                anchor += 1
        return anchor
        
if __name__ == "__main__": main()
