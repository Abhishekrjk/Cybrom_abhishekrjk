
# li = []


# for i in range(1,21):
#     x = int(("  no {} :".format(i)))
#     li.append(x)
#     print(li)
# l = [i if i%2==0 else "" for i in range(1,21)]



# print(l)



# del  remove clear defference 
#write a program to add five defferent intiger value

a = []

i = 1
while i<=5:
    x = int (input("Enter number : "))
    if x in a:
        print("Value exixt ")
        pass
    else:
        a.append(x)
        i=i+1

    print(a)
