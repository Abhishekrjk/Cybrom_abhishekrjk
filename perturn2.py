'''

n = int(input("Enter n : "))
mid = (n+1)/2
for i in range(1,n+1):
    for j in range(1,n+1):
        #if(i==1 or i==n or j==1 or j==n or i==mid or j==mid) : #rectengle peturn
        if(i==mid or j==mid or(j==1 and i<mid)or(j==n and i>mid )or (j>mid and i==1)or(j<mid and i==n)) : # swastic peturn 
            print(i,end=" ")
        else:
            print(" ",end=" ")
    print()

# 1     1 1 1 1
# 2     2
# 3     3
# 4 4 4 4 4 4 4
#       5     5
#       6     6
# 7 7 7 7     7
'''

n= int(input("Enter"))

for i in range(1,n+1):
    for j in range(1,(i)):
        print("*",end=" ")

    print()    