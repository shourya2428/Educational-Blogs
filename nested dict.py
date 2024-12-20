student={
    "name" : "rahul kumar",
    "subjects": {
        "phy":97,
        "chem":98,
        "maths" : 99
    }
}
print(student)
print(student["subjects"])
print(student["subjects"]["chem"])

print(list(student.values()))
print(len(student))
print(student.items())
print(list(student.items()))

print(student["name2"]) #error
print(student.get("name2"))#no error-none
