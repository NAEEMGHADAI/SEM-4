dict = {1:'naeem',2:'ahmed',3:'ateeb'}

for i in dict:
	print(dict[i])

name = input("ENTER THE NAME TO BE FOUND")
for i in dict:
	if(dict[i]==name):
		print(i)



def add(key,value):
	dict[key] = value
 
add(4,"javed")

print(dict)

'''python3 dict.py
naeem
ahmed
ateeb
ENTER THE NAME TO BE FOUNDnaeem
1
{1: 'naeem', 2: 'ahmed', 3: 'ateeb', 4: 'javed'}
'''
