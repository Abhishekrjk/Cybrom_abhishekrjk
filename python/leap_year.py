y = int(input("enter year"))
if(y%400==0 and y%100==0 or y%4==0 and y%100!=0):
    print("this is a leap year")

else:
    print("this is not leap year")
