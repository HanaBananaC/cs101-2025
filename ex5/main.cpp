#include <iostream>
using namespace std;

class Car{
    public:
    string m_brand;
    string m_model;
    int m_year;
    int m_MaxSeating;
    Car(string x,string y,int z,int s){
    m_brand=x;
    m_model=y;
    m_year=z;
    m_MaxSeating=s;
    }
    //protected:
    string m_DriveMode;
    
    int get_m_MaxSeating(){
        return m_MaxSeating;
    }
        string get_DriveMode(){
        return m_DriveMode;
        }
};

class BMW_Car : public Car{
    public:
    BMW_Car(string y,int z,int s) : Car("BMW",y,z,s){
        cout<<"Constructing BMW_Car\n";
        m_DriveMode = "Rear-wheel";
    }
};
    
    class AUDI_Car : public Car{
    public:
    AUDI_Car(string y,int z,int s) : Car("AUDI",y,z,s){
        cout<<"Constructing AUDI_Car\n";
        m_DriveMode = "Front-wheel";
    }
};
    
class BENZ_Car : public Car{
    public:
    BENZ_Car(string y,int z,int s) : Car("BENZ",y,z,s){
        cout<<"Constructing BENZ_Car\n";
        m_DriveMode = "Front-wheel";
        }
};
    
int main(){
    BMW_Car car_1("X5",2023,6);
    cout<<car_1.m_brand;
    cout<<":Drive Mode ="<<car_1.get_DriveMode()<<endl;
    
    AUDI_Car car_2("A1",2023,5);
    cout<<car_2.m_brand;
    cout<<":Drive Mode ="<<car_2.get_DriveMode()<<endl;
    
    BENZ_Car car_3("C300",2023,4);
    cout<<car_3.m_brand;
    cout<<":Drive Mode ="<<car_3.get_DriveMode()<<endl;
    return 0;
}