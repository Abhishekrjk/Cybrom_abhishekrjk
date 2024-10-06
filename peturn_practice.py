n= int(input("Enter your number"))
m=(n+1)/2
 

for i in range(1,n+1):
    for j in range(1,n+1):
        if(i==n or i==1 or j==1 or j==n or j==m or i==m ):                  #if(i==m or j==n or  j==1  ): for h
            print("*",end=" ") 
        else:
            print(" ",end=" ") 
            
    print()   

    
# *       *
# *       *
# * * * * *
# *       *
# *       * 