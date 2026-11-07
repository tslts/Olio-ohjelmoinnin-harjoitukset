#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
    public:
        string brand;
        string model;
        int yearModel;
        Car(string carBrand, string carModel, int setYear){
            brand = carBrand;
            model = carModel;
            yearModel = setYear;
        }
        void printData(){ //auton tietojen tulostus
            cout << "Merkki: "<< brand << endl;
            cout << "Malli: "<< model << endl;
            cout << "Valmistusvuosi: "<< yearModel << endl;
        }
    };
int main(){
    vector<Car> cars;
    cars.emplace_back("Volvo", "V40", 2015);
    cars.emplace_back("Honda", "Civic", 2008);
    cars.emplace_back("Volvo", "S80", 2012);

    for(int i=0; i<cars.size(); i++){
        cars[i].printData();
    };
    cars[1].printData(); //tulostetaan toisen auton tiedot
    return 0;
};