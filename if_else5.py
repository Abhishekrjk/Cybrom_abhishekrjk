ch = input("Enter any Char")

print(ch[0])
x = (ch[0])
if('A'<=x<='Z'):
    print("Capital")
elif(x>='a' and x<='z'):
    print("Small")
elif(x>='0' and x<='9'):
    print("Number")
else:
    print("Spcl char")


#print(ord(ch[0]))