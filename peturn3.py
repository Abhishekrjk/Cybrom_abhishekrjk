#n = int(input("Enter n : "))
#
#for i in range(1,n+1):
#    for s in range(1, (n-i)+1):
#        print(" ",end=" " )
#    for j in range(1,(i*2)):
#         print("*",end=" ")
#    print()

n=int(input("Enter your num"))
for i in range (1,n+1):
    for s in range(1,(i)):
        print(" ",end=" ")
    for j in range(n+1,1,-1):
        print("#",end=" ")

    print() 

for i in range (1,n+1):
    for s in range(1,(n-i)+1):
        print(" ",end=" ")
    for j in range(1,(i*2)):
        print("#",end=" ")

    print()          

    '''
            #
          # # #
        # # # # #
      # # # # # # #
    # # # # # # # # #
  # # # # # # # # # # #
# # # # # # # # # # # # #
    '''