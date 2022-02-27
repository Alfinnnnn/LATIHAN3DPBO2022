from processor import processor
from disk import disk
from ram import ram

class pc(processor, disk, ram):
    processor = processor()
    disk = disk()
    ram = ram()
    totalPrice = 0

    def __init__(self, processor = processor, disk = disk, ram = ram, totalPrice = 0):
        self.__processor = processor
        self.__disk = disk
        self.__ram = ram
        self.__totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice()

    #prosedur setter
    def setProcessor(self, processor):
        self.__processor = processor
    
    def setDisk(self, disk):
        self.__disk = disk
    
    def setRam(self, ram):
        self.__ram = ram
    
    def setTotalPrice(self, ProcPrice, DiskPrice, RamPrice):
        self.__totalPrice = ProcPrice + DiskPrice + RamPrice

    #prosedur getter data
    def getProcessor(self):
        return self.__processor
    
    def getDisk(self):
        return self.__disk
    
    def getRam(self):
        return self.__ram
    
    def getTotalPrice(self):
        return self.__totalPrice