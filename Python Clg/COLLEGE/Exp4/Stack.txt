class Stack:
	stack = [] 
	maxsize = -1
	
	def __init__(self,size = -1):
		self.maxsize = size 

	def push(self,item):
		if(self.maxsize == -1):
			self.stack.append(item)
		elif len(self.stack)<self.maxsize:
			self.stack.append(item)
		else:
			print("can\'t add item. stack limit is: ",self.maxsize)
			raise RuntimeError

	def pop(self):
		if len(self.stack) > 0:
			temp = self.stack[-1]
			self.stack.pop()
			return temp
		else:
			print('stack is already empty')

	def top(self):
		if len(self.stack)>0:
			return self.stack[-1]
		else:
			print('stack is already empty')
			raise IndexError

print('*******MAIN MENU********')
s = Stack()
choice = int(input('ENTER 1-PUSH\n 2-POP\n 3-TOP\n 4-EXIT\n'))

while(choice<4):
	if choice == 1:
		num = int(input("ENTER THE ELEMENT"))
		s.push(num)
	elif choice == 2:
		n = s.pop()
		print("ELEMENT REMOVED FROM THE STACK ",n)
	elif choice==3:		
		print("TOP MOST ELEMENT IS ",s.top())

	choice = int(input('ENTER 1-PUSH\n 2-POP\n 3-TOP\n 4-EXIT\n'))

'''output
dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop$ python3 Stack.py
*******MAIN MENU********
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
1
ENTER THE ELEMENT5
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
1
ENTER THE ELEMENT1
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
1
ENTER THE ELEMENT7
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
3
TOP MOST ELEMENT IS  7
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
3
TOP MOST ELEMENT IS  7
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
2
ELEMENT REMOVED FROM THE STACK  7
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
3
TOP MOST ELEMENT IS  1
ENTER 1-PUSH
 2-POP
 3-TOP
 4-EXIT
4
'''
