class abc(object):

    def __del__(self): # distructor are called at the last and called automaticly and use to distroy the all memory
        print("distructor called")
    def __init__(self,age,name): # operate the with out calling help with const 
        print("I am abhishek", "  Age is -",age,"  name is-",name)
        print("i am lern programing ")
    
    def abhi(self):
        print(" functiion are call by obj ")
        print("i am lern programing ")




obj=abc( 23,"abhishek")  # call 
obj.abhi()

# const is by name by init const are called in vock when ever without // why we used ci9ns
# at the time of object diclayer the  vLUE of const 
