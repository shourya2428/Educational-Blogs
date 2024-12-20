
name= "Shourya is an  intelligent boy "

print(name.replace("  "," "))#it replaces double space by single space
print(name.find(" "))# helps to find index of a number

#Strings are immutable which means that you cannot change them by running functions on them.
letter="Dear Harry,\n\tThis python course is nice.\nThanks!"

print(letter) #\t gives space &\n-gives new line
friends=["Apple", "orange",5,345.05,False,"Akash","Rohit"]

friends.append("Harry")
print (friends)

l1=[1,35,42,8,20]
l1.sort()
l1.reverse()

l1.insert(4,444444)#Insert 444444 such that its index in list is 4
print(l1)
#Unlike strings ,lists are mutable.
print(l1.pop(3))
print(l1)
