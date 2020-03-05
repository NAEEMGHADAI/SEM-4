class Person(object):
	def __init__(self,name):
		self.name = name
	
	def getName(self):
		return self.name

	def isEmployee(self):
		return False

class Employee(Person):
	def isEmployee(self):
		return True

emp = Employee("naeem")
m=emp.isEmployee()
print("IS NAEEM EMPLOYEE")
print(m)  

emp = Person("ahmed")
n= emp.isEmployee()
print("IS AHMED EMPLOYEE")
print(n)

'''dpl4-5@dpl45-ThinkCentre-M72e:~$ python3 single_inherit.py
IS NAEEM EMPLOYEE
True
IS AHMED EMPLOYEE
False
'''


	
