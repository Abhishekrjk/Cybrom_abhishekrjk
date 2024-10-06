class abc:
    a = 10
    _b = 20
    __c = 30

    def show(self):
        print(self.a)
    def showw(self):
        print(self._b)
    def showww(self):
        self.__c = 100
        print(self.__c)

class abcd(abc):
    pass

obj = abc()
obj.a = 12
obj.show()
obj._b = 56
obj.showw()
obj.__c = 67
obj.showww()