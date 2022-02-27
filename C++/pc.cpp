#include <string>
#include "processor.cpp"
#include "disk.cpp"
#include "ram.cpp"

using namespace std;

class PC{
    private:
        //atribut
        Processor processor;
        disk Disk;
        ram RAM;
        int totalPrice;

    public:
        //konstruktor
        PC() { }

        PC(Processor processor, disk Disk, ram RAM, int totalPrice){
            this->processor = processor;
            this->Disk = Disk;
            this->RAM = RAM;
            this->totalPrice = processor.getPrice() + Disk.getPrice() + RAM.getPrice();
        }

        // get dan set pc
        void setprocessor(Processor processor){
            this->processor = processor;
        }

        Processor getprocessor(){
            return this->processor;
        }

        void setDisk(disk Disk){
            this->Disk = Disk;
        }

        disk getDisk(){
            return this->Disk;
        }

        void setRam(ram RAM){
            this->RAM = RAM;
        }

        ram getRam(){
            return this->RAM;
        }

        void setTotalPrice(int Procprice, int diskPrice, int ramPrice){
            this->totalPrice = Procprice + diskPrice + ramPrice;
        }

        int getTotalPrice(){
            return this->totalPrice;
        }

        ~PC(){ }

};