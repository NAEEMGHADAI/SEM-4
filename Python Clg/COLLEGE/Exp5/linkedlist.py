class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def AddNode(self, data):
        newnode = Node(data)

        if self.head == None:
            self.head = newnode

        if self.tail != None:
            self.tail.next = newnode

        self.tail = newnode

    def RemoveNode(self, index):
        prev = None
        node = self.head
        i = 0

        while (node != None) and (i < index):
            prev = node
            node = node.next
            i += 1

        if prev == None:
            self.head = node.next

        else:
            prev.next = node.next

    def PrintList(self):
        node = self.head

        while node != None:
            print(node.data)
            node = node.next


List = LinkedList()

choice = int(input("ENTER\n1-ADD NODE\n2-REMOVE NODE\n3-PRINT LIST\n4-EXIT\n"))

while (choice != 4):
    if choice == 1:
        num = int(input("ENTER THE NUMBER\t"))
        List.AddNode(num)

    elif choice == 2:
        num = int(input("ENTER THE NUMBER TO BE REMOVED\t"))
        List.RemoveNode(num)

    elif choice == 3:
        List.PrintList()

    choice = int(input("ENTER\n1-ADD NODE\n2-REMOVE NODE\n3-PRINT LIST\n"))
