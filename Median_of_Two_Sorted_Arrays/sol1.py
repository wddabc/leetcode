#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 03:30:58 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __getTopK(self, A, B, k):
        m, n = len(A), len(B)
        if m > n: return self.__getTopK(B, A, k);
        if not m: return B[k-1]
        if k == 1: return min(A[0], B[0])
        diva = k/2
        divb = k - diva
        if diva > m:
            if A[m-1] < B[divb-1]: return self.__getTopK(A[m:], B, k-m)
            if A[m-1] > B[divb-1]: return self.__getTopK(A, B[divb:], diva)
            else: return self.__getTopK(A[m:], B[divb:], diva-m)
        else:
            if A[diva-1] < B[divb-1]: return self.__getTopK(A[diva:], B, divb)
            if A[diva-1] > B[divb-1]: return self.__getTopK(A, B[divb:], diva)
            else: return A[diva-1]
        return 0
        
    # @return a float
    def findMedianSortedArrays(self, A, B):
        total = len(A) + len(B)
        if total&1:
            return self.__getTopK(A, B, (total+1)/2)
        else:
            return (self.__getTopK(A, B, total/2)+self.__getTopK(A, B, (total/2)+1))/2.0
        class Solution:
    def __getTopK(self, A, B, k):
        m, n = len(A), len(B)
        if m > n: return self.__getTopK(B, A, k);
        if not m: return B[k-1]
        if k == 1: return min(A[0], B[0])
        diva = k/2
        divb = k - diva
        if diva > m:
            if A[m-1] < B[divb-1]: return self.__getTopK(A[m:], B, k-m)
            if A[m-1] > B[divb-1]: return self.__getTopK(A, B[divb:], diva)
            else: return self.__getTopK(A[m:], B[divb:], diva-m)
        else:
            if A[diva-1] < B[divb-1]: return self.__getTopK(A[diva:], B, divb)
            if A[diva-1] > B[divb-1]: return self.__getTopK(A, B[divb:], diva)
            else: return A[diva-1]
        return 0
        
    # @return a float
    def findMedianSortedArrays(self, A, B):
        total = len(A) + len(B)
        if total&1:
            return self.__getTopK(A, B, (total+1)/2)
        else:
            return (self.__getTopK(A, B, total/2)+self.__getTopK(A, B, (total/2)+1))/2.0
        

def main():
	s=Solution()
	A=[1,2,3]
	B=[1,2,2]
	print s.findMedianSortedArrays(A,B)
if __name__ == "__main__": main()
