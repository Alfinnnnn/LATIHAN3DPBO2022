class disk:

    __type= ''
    __capacity = ''
    __price = 0

    def __init__(self, type = '', capacity = '', price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price
        
    #prosedur setter data
    def setType(self, type):
        self.__type = type
    
    def setCapacity(self, capacity):
        self.__capacity = capacity
    
    def setPrice(self, price):
        self.__price = price
    
    #prosedur getter data
    def getType(self):
        return self.__type
    
    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
