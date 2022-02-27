#include <string>

using namespace std;

class ram
{
    private:
        //atribut
        string kapasitas;
        int price;
    
    public:
        //konstruktor
        ram(){ }

        ram(string kapasitas, int price){
            this->kapasitas = kapasitas;
            this->price = price;
        }

        //prosedur setter data
        void setKapasitas(string kapasitas){
            this->kapasitas = kapasitas;
        }

        void setPrice(int price){
            this->price = price;
        }

        //prosedur getter data
        string getKapasitas(){
            return this->kapasitas;
        }

        int getPrice(){
            return this->price;
        }

        //destruktor
        ~ram(){ }
};