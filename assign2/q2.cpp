#include<iostream>
using namespace std;
class address{
    private:
        string building;
        string street;
        string city;
        int pin;
    public:
        address(){

        }
        address(string building,string street ,string city,int pin){
                this->building=building;
                this->street=street;
                this->city=city;
                this->pin=pin;
        }
        void accept(){
            cout<<"Enter building Name.. "<<endl;
            cin>>this->building;
            cout<<"Enter Street.. "<<endl;
            cin>>this->street;
            cout<<"Enter City.. "<<endl;
            cin>>this->city;
            cout<<"Enter Pin.. "<<endl;
            cin>>this->pin;
        }
        void display(){
            cout<<"Building Name is :"<<this->building<<endl;
            cout<<"Street Name is :"<<this->street<<endl;
            cout<<"City Name is :"<<this->city<<endl;
            cout<<"Pin is :"<<this->pin<<endl;
        }
        string get_building(string building){
            return this->building=building;
        }
        string get_street(string street){
            return this->street=street;
        }
        string get_city(string city){
            return this->city=city;
        }
        int get_pin(int pin){
            return this->pin=pin;
        }
        void set_building(string building){
            this->building=building;
        }
        void set_street(string street){
            this->street=street;
        }
        void set_city(string city){
            this->city=city;
        }
        void set_pin(int pin){
            this->pin=pin;
        }
};
int main()
{
    address a1;
    a1.accept();
    a1.display();
    address a2("XYZ","MAIN_ROAD","KOLHAPUR",416100);
    a2.display();


            a1.set_building("Sunbeam");
            a1.set_street("Shukravar_Peth");
            a1.set_city("Karad");
            a1.set_pin(416112);
            a1.display();

            a1.get_building("Sunbeam");
            a1.display();

            a1.get_street("Phase2");
            a1.display();

            a1.get_city("Hinjewadi");
            a1.display();

            a1.get_pin(410410);
            a1.display();
         
}