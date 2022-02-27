class ram:

    __capacity = ''
    __price = 0

    def __init__(self, capacity = '', price = 0):
        self.__capacity = capacity
        self.__price = price
    
    #prosedur setter
    def setCapacity(self, capacity):
        self.__capacity = capacity
    
    def setPrice(self, price):
        self.__price = price
    
    #Prosedur getter
    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
    
    