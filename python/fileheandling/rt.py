file=open("ajay.txt",'w')
for i in range(1,11):
    file.write(str(i))
    if(i<10):
        file.write(", ")
file.write("\n")