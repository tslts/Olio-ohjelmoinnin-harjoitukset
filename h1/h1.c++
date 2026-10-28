#include <iostream>
#include <iomanip>

using namespace std;


int calcSum(int a, int b){
    cout << "Luvun " << a << " ja luvun " << b << " summa on " << a+b << endl;
    return 0;
}

double calcDiv(int a, int b){
    if(b == 0){
    cout << "Et voi jakaa nollalla"<<endl;
    return 0;
    }
    double result = static_cast<double>(a)/b; //riittää, että toinen muutetaan liukuluvuksi
    cout << fixed << setprecision(2);
    cout << "Luvun " << a << " ja luvun " << b << " osamäärä on " << result << endl;
    return 0;
}

int retSum(int a, int b){
    return a+b;
}

float retDiv(int a, int b){
    if(b == 0){
        throw runtime_error("Jakaja ei saa olla nolla");
    }
    return static_cast<float>(a)/b;
}

int main() {
  
    int a;
    int b;
    float result;

    cin >> a;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);
    retSum(a, b);
    try {
        result = retDiv(a, b);
        cout << a << "/" << b << " = " << result << endl;
    } catch (runtime_error& e){ //runtime_error tallentaa virheilmoituksen muuttujaan e
        cout <<"error: "<< e.what()<< endl; //e.what() palauttaa virheilmoituksen
    }
    return 0;
}