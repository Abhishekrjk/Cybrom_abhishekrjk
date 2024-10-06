class sal:
    __sal = 0
    def _init_(self, s):
        self.__sal = s
    
    def cal_sal(self ): 
        ta = self.__sal * 0.2
        hra = self.__sal * 0.3
        da = self.__sal * 0.4
        pf = self.__sal * 0.1
        esi = self.__sal * 0.1
        gross = self.__sal+ ta+da+hra -pf -esi

        if(gross <= 100000):
            print(gross)
        elif (gross <=120000):
            print(gross-gross*0.10)
        elif (gross <=150000):
            print(gross-gross*0.20)
        elif (gross > 150000):
            print(gross-gross*0.30)
            

emp1 = sal(100)

emp1.cal_sal()