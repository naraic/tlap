//Automobile class
//manufacturer name, model name, year
//get/set for each
//page 161

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Automobile {
    public:
        Automobile();
        Automobile(string manufacturer, string model, int year);
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
Automobile::Automobile() {
}

Automobile::Automobile(string manufacturer, string model, int year) {
    _manufacturer = manufacturer;
    _model = model;
    _year = year;
}

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

void output(Automobile a) {
    cout << "manufacturer: " << a.manufacturer() << endl;
    cout << "model: " << a.model() << endl;
    cout << "year: " << a.year() << endl;
}

int main() {
    Automobile test = Automobile("bmw", "3series", 2015);
    output(test);
    test.setManufacturer("volvo");
    test.setModel("c30");
    test.setYear(2017);
    output(test);
    return 0;
}
