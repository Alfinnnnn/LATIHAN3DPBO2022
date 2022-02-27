from pc import pc
from processor import processor
from disk import disk
from ram import ram


class main(pc, processor, disk, ram):

    processor_in = processor()
    #input data processor
    processor_in.setNama("AMD Ryzen 7")
    processor_in.setPrice(4000000)

    disk_in = disk()
    #input data disk
    disk_in.setType("SSD")
    disk_in.setCapacity("1TB")
    disk_in.setPrice(1000000)

    ram_in = ram()
    #input data Ram
    ram_in.setCapacity("16GB")
    ram_in.setPrice(500000)

    PC_in = pc()
    PC_in.setProcessor(processor_in)
    PC_in.setDisk(disk_in)
    PC_in.setRam(ram_in)
    PC_in.setTotalPrice(processor_in.getPrice(), disk_in.getPrice(), ram_in.getPrice())

    print("Data PC\n")

    print("Nama Processor : " + PC_in.getProcessor().getNama())
    print("Harga          : " + str(PC_in.getProcessor().getPrice()))
    print("Tipe disk      : " + PC_in.getDisk().getType())
    print("Kapasitas disk : " + PC_in.getDisk().getCapacity())
    print("Harga disk     : " + str(PC_in.getDisk().getPrice()))
    print("Size RAM       : " + PC_in.getRam().getCapacity())
    print("Harga RAM      : " + str(PC_in.getRam().getPrice()))
    print("Harga Total    : " + str(PC_in.getTotalPrice()))

