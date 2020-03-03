
import array
float_array = array.array('d', [1.1, 3.5, 4.5])
int_array = array.array('i', [2, 4, 6, 8, 5, 9, 1])

float_array.append(5.9)
int_array.remove(8)
int_array.pop()

print(float_array)
print(int_array)

'''dpl4-5@dpl45-ThinkCentre-M72e:~/Desktop$ python3 Array14.py
array('d', [1.1, 3.5, 4.5, 5.9])
array('i', [2, 4, 6, 5, 9])'''

