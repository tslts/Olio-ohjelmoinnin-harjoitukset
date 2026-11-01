#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int yearModel;
        void printData(){
            cout << "Merkki: "<< brand << endl;
            cout << "Malli: "<< model << endl;
            cout << "Valmistusvuosi: "<< yearModel << endl;
        }
        void setBrand(string carBrand){
            brand = carBrand;
        }
        void setModel(string carModel){
            model = carModel;
        }
        void setYearModel(int setYear){
            yearModel = setYear;
        }
	};

class Rectangle {
    public:
        double width;
        double height;

        double getArea() const {
            double area = width * height;
            return area;
        }
        double getCircum() const {
            double circum = 2 * (width+height);
            return circum;
        }
        void setWidth(double w){
            width = w;
        }
        void setHeight(double h){
            height = h;
        }
        void deleteRectangle(){
            cout << "Tämän rivin jälkeen olio poistetaan muistista." << endl;
            delete this;
        }
};