class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    def insert(self, head, data):
        p = Node(data)
        if head is None:
            head = p
        elif head.next is None:
            head.next = p
        else:
            start = head
            while start.next is not None:
                start = start.next
            start.next = p
        return head

    def display(self, head):
        current = head
        while current:
            print(current.data, end=" ")
            current = current.next

    def removeDuplicates(self, head):
        curr = head
        while curr is not None and curr.next is not None:
            while curr.next is not None and curr.data is curr.next.data:
                curr.next = curr.next.next
            curr = curr.next
        return head


mylist = Solution()
T = int(input())
head = None
for i in range(T):
    data = int(input())
    head = mylist.insert(head, data)
head = mylist.removeDuplicates(head)
mylist.display(head)
