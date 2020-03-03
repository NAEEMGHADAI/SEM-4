num = int (input("ENTER THE LAST NO. OF THE RANGE"))

for i in range(1,num+1):
	for j in range(2,i):
		if i%j==0:
			break
	else:
		print(i)

'''dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop$ python3 Prime.py
ENTER THE LAST NO. OF THE RANGE20
1
2
3
5
7
11
13
17
19
'''

			

