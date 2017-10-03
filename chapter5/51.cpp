//Automobile class
//manufacturer name, model name, year
//get/set for each

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Automobile {
    public:
        //Automobile();
        //Automobile(string manufacturer, string model, int year);
        string manufacturer();
        void setManufacturer(string manufacturer);
        string model();
        void setModel(string model);
        int year(); 
        void setYear(int year); 

    private:
        string _manufacturer;
        string _model;
        int _year;
};

//functions

/*Automobile::Automobile(string manufacturer, string model, int year) {
    _manufacturer = manufacturer;
    _model = model;
    _year = year;
}*/

string Automobile::manufacturer() {
    return _manufacturer;
}

void Automobile::setManufacturer(string manufacturer) {
    _manufacturer = manufacturer;
}
string Automobile::model() {
    return _model;
}

void Automobile::setModel(string model) {
    _model = model;
}
int Automobile::year() {
    return _year;
}
void Automobile::setYear(int year) {
    _year = year;
}

int main() {
    return 0;
    }
