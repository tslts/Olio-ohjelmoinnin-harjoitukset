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
	};