public class Main {
    public static void main(String[] args){

        Processor processor = new Processor();
        //menginput data processor
        processor.setNama("AMD Ryzen 7");
        processor.setPrice(4000000);

        Disk disk = new Disk();
        //menginput data
        disk.setType("SSD");
        disk.setCapacity("1TB");
        disk.setPrice(1000000);

        Ram ram = new Ram();
        ram.setCapacity("16GB");
        ram.setPrice(500000);

        Pc PC = new Pc();
        //input data PC
        PC.setProcessor(processor);
        PC.setDisk(disk);
        PC.setRam(ram);
        PC.totalPrice(processor.getPrice(), disk.getPrice(), ram.getPrice() );

        //menampilkan hasil
        System.out.println("Data PC\n");
    
        System.out.println("Nama Processor : "  + PC.getProcessor().getNama());
        System.out.println("Harga          : "  + PC.getProcessor().getPrice());
        System.out.println("Tipe disk      : "  + PC.getDisk().getType());
        System.out.println("Kapasitas disk : "  + PC.getDisk().getCapacity());
        System.out.println("Harga disk     : "  + PC.getDisk().getPrice());
        System.out.println("Size RAM       : "  + PC.getRam().getCapacity());
        System.out.println("Harga RAM      : "  + PC.getRam().getPrice());
        System.out.println("Harga Total    : "  + PC.getTotalPrice());
    
    }
}
