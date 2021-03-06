class queue:
    def __init__(self, max1, size=0, front=0, rear=0):
        self.queue = [[] for i in range(5)]
        self.max1 = max1
        self.size = size
        self.front = front
        self.rear = rear

    def enqueue(self, data):
        if not self.isfull():
            self.queue[self.rear] = data
            self.rear = int((self.rear+1) % self.max1)
            self.size += 1
        else:
            print("QUEUE IS FULL")

    def dequeue(self):
        if not self.isEmpty():
            print(self.queue[self.front], "is removed")
            self.front = int((self.front + 1) % self.max1)
            self.size -= 1
        else:
            print("QUEUE IS EMPTY")

    def isEmpty(self):
        return self.size == 0

    def isfull(self):
        return self.size == self.max1

    def show(self):

        if len(self.queue) == 0:
            print("QUEUE IS EMPTY")
        else:
            for i in range(self.size):
                print(self.queue[int((i+self.front) % self.max1)])


print('*******MAIN MENU********')
q = queue(5)
choice = int(input('ENTER 1-PUSH\n 2-DELETE\n 3-SHOW\n 4-EXIT\n'))

while(choice < 4):
    if choice == 1:
        num = int(input("ENTER THE ELEMENT"))
        q.enqueue(num)
    elif choice == 2:
        q.dequeue()
        print("ELEMENTS REMAINING IN QUEUE ARE \n")
        q.show()
    elif choice == 3:
        print("QUEUE ELEMENTS ARE ")
        q.show()

    choice = int(input('ENTER 1-PUSH\n 2-DELETE\n 3-SHOW\n 4-EXIT\n'))

'''OUTPUT:
dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop/Exp4$ python3 queue.py
*******MAIN MENU********
ENTER 1-PUSH
 2-DELETE
 3-SHOW
 4-EXIT
1
ENTER THE ELEMENT5
ENTER 1-PUSH
 2-DELETE
 3-SHOW
 4-EXIT
1
ENTER THE ELEMENT1
ENTER 1-PUSH
 2-DELETE
 3-SHOW
 4-EXIT
3
QUEUE ELEMENTS ARE 
CONTENTS ARE:
5
1
[]
[]
[]
ENTER 1-PUSH
 2-DELETE
 3-SHOW
 4-EXIT
2
5 is removed
ELEMENTS REMAINING IN QUEUE ARE 

CONTENTS ARE:
5
1
[]
[]
[]
ENTER 1-PUSH
 2-DELETE
 3-SHOW
 4-EXIT
4
'''
