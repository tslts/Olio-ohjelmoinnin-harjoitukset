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

	Student *student1 = new Student();
	student1->setName("Opiskelija Onni");
	student1->setAvg(8.1);
	student1->setNum(1234);
	student1->printData();
	delete student1; //poistaminen delete-operaattorilla
	student1 = nullptr;
	return 0;
}