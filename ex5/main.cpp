#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
    string m_DriveMode;
    int m_MaxSeating;
    int m_price;
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y, int z, int s){}
    int get_m_MaxSeating(){}
    int get_Price(){}
    string get_DriveMode(){}

};


 class BMW_Car : public Car {
            public:
            BMW_Car(string y, int z, int s) : Car("BMW", y, z, s){
                cout << "Constructing BMW_Car\n";
                m_DriveMode = "Rear-wheel";
            }
        class AUDI_Car : public Car {
            public:
            AUDI_Car(string y, int z, int s) : Car("Audi", y, z, s){
                cout << "Constructing AUDI_Car\n";
                m_DriveMode = "Front-wheel";
            }
        class BMW_Car : public Car {
            public:
            BENZ_Car(string y, int z, int s) : Car("Benz", y, z, s){
                cout << "Constructing Benz_Car\n";
                m_DriveMode = "Front-wheel";
            }




















