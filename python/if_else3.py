ch = input("Enter any Char")

print(ch[0])
x = ord(ch[0])
if(x>=65 and x<=90):
    print("Capital")
elif(x>=97 and x<=122):
    print("Small")
elif(x>=48 and x<=57):
    print("Number")
else:
    print("Spcl char")


#print(ord(ch[0]))