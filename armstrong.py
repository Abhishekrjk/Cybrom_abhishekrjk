# import math

# n = int(input("Enter Number "))

# cod =0
# t = n
# while(t>0): # 153
#    cod+=1
#    t = t//10 # 15

# t = n
# sum =0

# while(t>0): # 15 
#     r = t%10  # 5
#     sum = sum + pow(r,cod) # 5
#     t = t//10


# if(n==sum):
#     print((n),"Number is armstrong")
# else:
#     print("Number is not armstrong")

import math
n=int(input("enter your num"))
cod=0
t=n
while(t>0):
    cod+=1
    t=t//10
t=n
sum=0    
while(t>0 ):
    r=t%10
    sum=sum+pow(r,cod)
    t=t//10   

if(n==sum):
    print("arm")
else:
    print("not")    