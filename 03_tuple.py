a=(1,45,342,3545)
no=a.count(342)# sirf ek baar aata hai iska matlab

print(no)
i=a.index(342)
print(i)

#Tuples can be unpacked into individual variables
my_tuple = (1, 2, 3, 2, 2, 4)
count_2 = my_tuple.count(2)  # Output:3
my_tuple = (1, 2, 3, 2, 2, 4)
index_3 = my_tuple.index(3)  # Output: 2
my_tuple = (1, 2, 3)
first_element = my_tuple[0]  # Output: 1
my_tuple = (1, 2, 3)
length = len(my_tuple)  # Output: 3
tuple1 = (1, 2)
tuple2 = (3, 4)
concatenated_tuple = tuple1 + tuple2  # Output: (1, 2, 3, 4)
my_tuple = (1, 2)
repeated_tuple = my_tuple * 3  # Output: (1, 2, 1, 2, 1, 2)
my_tuple = (1, 2, 3)
exists = 2 in my_tuple  # Output: True


