class India():
    def capital(self):
        print(" \n New Delhi is the capital of India. \n ")

    def language(self):
        print( " \n Hindi is the most widely spoken language of India. \n ")

    def type(self):
        print(" \n India is a developing country. \n")

class USA():
    def capital(self):
        print("Washington, D.C. is the capital of USA. \n ")

    def language(self):
        print(" \n English is the primary language of USA. \n ")

    def type(self):
        print(" \n USA is a developed country \n .")

obj_ind = India()
obj_usa = USA()
for country in (obj_ind, obj_usa):
    country.capital()
    country.language()
    country.type()
