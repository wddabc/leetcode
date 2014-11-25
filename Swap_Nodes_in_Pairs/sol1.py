#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 13:05:01 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param a ListNode
    # @return a ListNode
    def swapPairs(self, head):
        dummy = ListNode(0)
        dummy.next = head
        ptr = dummy
        while ptr.next:
            n1 = ptr.next
            n2 = n1.next
            if not n2: break
            ptr.next = n2
            n1.next = n2.next
            n2.next = n1
            ptr = n1
        return dummy.next
if __name__ == "__main__": main()
