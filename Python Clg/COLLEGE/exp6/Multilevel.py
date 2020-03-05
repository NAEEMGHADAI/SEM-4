class Sides():
	def __init__(self,l,b,r):
		self.l=l
		self.b=b
		self.r=r
	
class Area(Sides):
	def __init__(self,a1=1,a2=1):
		self.a1=a1
		self.a2=a2
	def Rect(self,l,b):
		a1=l*b
		return a1
	def Circle(self,r):
		a2=3.142*r*r
		return a2

class Object(Area):
	def field(self):
		print('Area of the field is {0} and area of the football is {1}'.format(super.a1,super.a2))

obj = Object()
obj.__init__(10,10,10)
print(obj.Rect(20,20))

	
		

