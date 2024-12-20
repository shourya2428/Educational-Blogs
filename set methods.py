#set.add(el) #adds an element
#set.removal(el)#removes the element
#set.clear()#empties the set
#set.pop()#removes a random value
#set.union()#combines both set values& returns new
#set.intersection()#combines common values and returns new

c=set()
c.add(1)
c.add(2)
c.add("hello baccho")
c.remove(1)
c.add((1,4,7))#valid

print(c)
#values inside set are hashable.i.e can't change
c.clear()
print(len(c))

alpha={"kush","shourya","ansh","raghav"}
print(alpha.pop())

set1={1,2,3}
set2={3,5,7}

print(set1.union(set2))#{1,2,3,5,7}