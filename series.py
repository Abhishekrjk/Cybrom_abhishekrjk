import math
n=int(input("enter last"))
p=2
sum=0

for i in range(1,n+1):
  X=math.pow(p,i)
  y=math.factorial(i)
  sum=sum+X/y
  print("x^",i," / ",y,end="")
  if(i==n):
    print("\n")
  else:
    print(" + ",end="")  

print(sum)  

   
