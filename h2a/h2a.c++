#include "h2a.h"

int main() {
	Car car;

	car.setBrand("Toyota");
	car.setModel("Corolla");
	car.setYearModel(2021);
	car.printData();

	Rectangle *rec = new Rectangle();
	rec->setHeight(3.2);
	rec->setWidth(2.1);
	cout << "area: " << rec->getArea() << endl;
	cout << "circum: " << rec->getCircum() << endl;
	rec->deleteRectangle();
	
	rec = nullptr; //osoitin rec-olioon tyhjennetään

	return 0;
}