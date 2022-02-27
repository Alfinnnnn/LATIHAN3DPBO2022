#include <string>

using namespace std;

class disk
{
    private:
        //atribut
        string type;
        string capacity;
        int price;

    public:
        //konstruktor
        disk(){ }

        disk(string type, string capacity, int price){
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        //prosedur getter
        void setType(string type){
            this->type = type;
        }

        void setCapacity(string capacity){
            this->capacity = capacity;
        }

        void setPrice(int price){
            this->price = price;
        }

        //prosedur getter
        string getType(){
            return this->type;
        }

        string getCapacity(){
            return this->capacity;
        }

        int getPrice(){
            return this->price;
        }

        //destruktor
        ~disk(){ }
};

