#!/usr/bin/python
# --------------------------------------- 
# File Name : soll.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 15:15:16 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __gen_next(self, needle):
        l, k, i = len(needle), -1, 0
        next = [0]*l
        next[0] = -1
        while i < l - 1:
            if k == -1 or needle[k] == needle[i]:
                k += 1
                i += 1
                if needle[k] == needle[i]:
                    next[i] = next[k]
                else:
                    next[i] = k
            else:
                k = next[k]
        return next
    # @param haystack, a string
    # @param needle, a string
    # @return an integer
    def strStr(self, haystack, needle):
        nh, nn,i, j = len(haystack), len(needle), 0, 0
        if not nn: return 0
        if not nh: return -1
        next = self.__gen_next(needle)
        while i < nh:
            if j == -1 or haystack[i] == needle[j]:
                i += 1
                j += 1
            else:
                j = next[j]
            if j == nn: return i-nn
        return -1
        
def main():
	s = Solution()
	print s.strStr("mississippi", "mississippi")
if __name__ == "__main__": main()
