public class Processor {
    //atribut
    private String nama;
    private int price;

    //konstruktor
    Processor(){ }

    Processor(String nama, int price){
        this.nama = nama;
        this.price = price;
    }

    //prosedut setter data
    public void setNama(String nama){
        this.nama = nama;
    }

    public void setPrice(int price){
        this.price = price;
    }

    //prosedur getter data
    public String getNama(){
        return this.nama;
    }

    public int getPrice(){
        return this.price;
    }



}
