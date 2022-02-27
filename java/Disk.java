public class Disk {
    //atribut
    private String type;
    private String capacity;
    private int price;

    //konstruktor
    Disk(){ }

    Disk(String type, String capacity, int price){
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    //prosedur Setter data
    public void setType(String type){
        this.type = type;
    }

    public void setCapacity(String capacity){
        this.capacity = capacity;
    }

    public void setPrice(int price){
        this.price = price;
    }

    //prosedur getter data

    public String getType(){
        return this.type;
    }

    public String getCapacity(){
        return this.capacity;
    }

    public int getPrice(){
        return this.price;
    }

}
