import math

n = int(input("Enter Number "))

cod =0
t = n
while(t>0): # 153
   cod+=1
   t = t//10 # 15

t = n
sum =0

while(t>0): # 15 
    r = t%10  # 5
    sum = sum + pow(r,cod) # 5
    t = t//10


if(n==sum):
    print((n),"Number is armstrong")
else:
    print("Number is not armstrong")