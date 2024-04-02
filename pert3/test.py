value_str = input("Enter value : ")
value = int(value_str)

if value >=90:
    grade = "A"
elif value >=80:
    grade = "B"
else :
    grade = "E"

print ("grade : %s" % grade)