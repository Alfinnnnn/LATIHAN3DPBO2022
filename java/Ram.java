public class Ram {
    
    private String capacity;
    private int price;

    //konstruktor
    Ram(){ }

    Ram(String capacity, int price){
        this.capacity = capacity;
        this.price = price;
    }
    
    //prosedur setter data
    public void setCapacity(String capacity){
        this.capacity = capacity;
    }

    public void setPrice(int price){
        this.price = price;
    }

    //prosedut getter
    public String getCapacity(){
        return this.capacity;
    }

    public int getPrice(){
        return this.price;
    }

}
