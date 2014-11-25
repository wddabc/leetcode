#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 01:24:51 2014
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
    # @return a ListNode
    def removeNthFromEnd(self, head, n):
        dummy = ListNode(0)
        fast, slow = dummy, dummy
        dummy.next = head
        for i in range(0,n):
            fast = fast.next
        while fast.next:
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next
        return dummy.next
if __name__ == "__main__": main()
