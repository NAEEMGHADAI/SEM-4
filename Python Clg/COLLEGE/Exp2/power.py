num = int(input("ENTER NUMBER"))
power = int(input("ENTER THE POWER"))
num1= num
while(power-1>0):
	num1  = num*num1 
	power = power -1

print(num1)

'''dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop$ python3 power.py
ENTER NUMBER5
ENTER THE POWER3
125'''

