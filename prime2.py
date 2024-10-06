a=int(input("enter the number"))
b=int(input("enter the number"))

for n in range(a,b+1):
    c=0
    i=2
    while(n>i):
      if(n%i==0):
         
           c=c+i
         
      i=i+1
    if(c==0):
            print((n),"prime number")

