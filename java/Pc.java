public class Pc {
    
    private Processor processor;
    private Disk disk;
    private Ram ram;
    private int totalPrice;

    //konstruktor
    Pc(){ }

    Pc(Processor processor, Disk disk, Ram ram, int totalPrice){
        this.processor = processor;
        this.disk = disk;
        this.ram = ram;
        this.totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice();
    }

    //prosedur setter
    public void setProcessor(Processor processor){
        this.processor = processor;
    }

    public void setDisk(Disk disk){
        this.disk = disk;
    }

    public void setRam(Ram ram){
        this.ram = ram;
    }

    public void totalPrice(int ProcPrice, int DiskPrice, int RamPrice){
        this.totalPrice = ProcPrice + DiskPrice + RamPrice;
    }

    //prosedur getter
    public Processor getProcessor(){
        return this.processor;
    }

    public Disk getDisk(){
        return this.disk;
    }

    public Ram getRam(){
        return this.ram;
    }

    public int getTotalPrice(){
        return this.totalPrice;
    }

}
