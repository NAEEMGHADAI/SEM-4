tup1 = "1,2,3,4,"
print(tup1)
tup2 = "hello,world"
print(tup2)
tup3 = tup1+tup2
print(tup3)
tup1 = tup1,tup2
print(tup1)
print(min(tup1))
print(min(tup2))
print(max(tup1))
print(max(tup2))
day1 = ('Mon','Tue','Wed','Thur')
day2 = ('Fri','Sat','Sun')
if 'Mon' in day1:
	print("Monday is working day")
else:
	print("Monday is not a working day")
t1 = (1,2,3,4,5,6,7)
t2 = (5,6,7,8)
if t1>t2 :
	print("t1 is greater")
else :
	print("t2 is greater")

'''dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop$ python3 tuple.py
1,2,3,4,
hello,world
1,2,3,4,hello,world
('1,2,3,4,', 'hello,world')
1,2,3,4,
,
hello,world
w
Monday is working day
t2 is greater'''

