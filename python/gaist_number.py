import random as rd

n = rd.randint(1,100)
print(n)


a = int(input("Enter number "))
while(a != n):
    if(a>n):
        print("Large")
    else:
        print("Small")
    a = int(input("Enter number "))

print("We got lucky number", a,n)