#include <string>

using namespace std;

class Processor
{
    private:
        //atribut
        string nama;
        int price;

    public:
        //constructor
        Processor(){ }

        Processor(string nama, int price){
            this->nama = nama;
            this->price = price;
        }

        //prosedur setter data
        void setNama(string nama){
            this->nama = nama;
        }

        void setPrice(int price){
            this->price = price;
        }

        //prosedur getter
        string getNama(){
            return this->nama;
        }

        int getPrice(){
            return this->price;
        }
        
        //destruktor
        ~Processor(){
        }

};
