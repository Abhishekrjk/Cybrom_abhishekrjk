p = int(input("Enter Physics Marks " ))
c = int(input("Enter Chemistry Marks " ))
m = int(input("Enter Maths Marks " ))
Hindi=int(input("Enter Hindi marks " ))
Eg = int(input("Enter English marks " ))

t = p+c+m+Hindi+Eg
pr = t/5
print("Total is {0} and % is {1}".format(t,pr))

if(pr>100 or pr<0):
    print("Wrong Marks")
elif(pr>90):
    print("Grade is * A *+")
elif(pr>80):
    print("Grade is *A*")
elif(pr>70):
    print("Grade is * B+ *")
elif(pr>60):
    print("Grade is B")
elif(pr>50):
    print("Grade is C+")
elif(pr>40):
    print("Grade is C")
elif(pr>35):
    print("Grade is S")
else:
    print("FAIL")