class processor :
    
    #Atribut
    __nama = ''
    __price = 0

    #konstruktor
    def __init__(self, nama = '', price = 0):
        self.__nama = nama
        self.__price = price

    #prosedur setter data

    def setNama(self, nama):
        self.__nama = nama
    
    def setPrice(self, price):
        self.__price = price

    #prosedur getter data
    def getNama(self):
        return self.__nama
    
    def getPrice(self):
        return self.__price
