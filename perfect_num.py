n=int(input("Enter your number "))
# sum=0
# for i in range(1, n):
#     if( n % i==0):
#         sum=sum+i

# if(sum==n):
#     print("number is perfect no")  
# else:
#     print("number is not perfect no") 
  
# prime number 

# t=n
# cod=0
# for i in range(2,t):
#     if(t%i==0):
#         cod=cod+1

# if(cod==0):
#     print("prime")
# else:
#     print("not prime")      


# pelindrom number 

if(n==0):
 
    print("is not palindron not ")
else:  
   t=n
   res=0  
   while(t>0):
      r=t%10 
      res=res*10+r
      t=t//10
    
   if(n==res):
        print("this number is palindrom")  

   else:
       print("not palindrom")         