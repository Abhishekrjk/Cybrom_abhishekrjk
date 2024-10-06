n=int(input("enter your number"))
i=1
c=0
while(i<=n):
 if(n%i==0):
  #print(i)
  i+=1
 c+=1
if(c==2):
 print("is a prime number")
else:
  print("is  a not prime number")

