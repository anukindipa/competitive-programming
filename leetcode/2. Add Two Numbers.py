# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        first = ListNode()
        cur = first
        carry = 0
        first.val = (l1.val + l2.val) % 10
        carry = (l1.val + l2.val) // 10
        cur = first
        while l1.next or l2.next or carry:
            v1 = v2 = 0
            if l1.next:
                l1 = l1.next
                v1 = l1.val
            if l2.next:
                l2 = l2.next
                v2 = l2.val
            nw = ListNode((v1+v2+carry) % 10)
            cur.next = nw
            cur = nw
            carry = (v1+v2+carry) // 10
        return first
