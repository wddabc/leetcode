#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 13:20:29 2014
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
    # @param head, a ListNode
    # @param k, an integer
    # @return a ListNode
    def reverseKGroup(self, head, k):
        dummy = ListNode(0)
        dummy.next = head
        start = dummy
        while start.next:
            end = start
            for i in range(0, k):
                if not end.next: return dummy.next
                end = end.next
            s, l = start.next, end.next
            while s.next != l:
                c = s.next
                s.next = c.next
                c.next = start.next
                start.next = c
            start = s
        return dummy.next
if __name__ == "__main__": main()
