list = [-1,23,12,131,13345]
list.append(234)
print("Appended list:",list)
list.sort()
print("Sorted list:",list)
list.reverse()
print("Reversed order:",list)
list.remove(list[0])
print("Removed value:",list[0])
length = len(list)
print("Length of list:",length)
print("23 is present at index:",list.index(23))
del(list)
print(list)

'''dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop$ python3 list.py
Appended list: [-1, 23, 12, 131, 13345, 234]
Sorted list: [-1, 12, 23, 131, 234, 13345]
Reversed order: [13345, 234, 131, 23, 12, -1]
Removed value: 234
Length of list: 5
23 is present at index: 2
<class 'list'>'''



