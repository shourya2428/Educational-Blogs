list1=[1,2,3]

copy_list1=list1.copy()
copy_list1.reverse()
if(copy_list1 == list(1)):
    print("palindrome")
else:
    print("not a palindrome")
