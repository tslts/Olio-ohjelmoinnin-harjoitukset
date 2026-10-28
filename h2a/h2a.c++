#include <iostream>
#include "h2a.h"

int main() {
	Car car;

	car.brand = "Toyota";
	car.model = "Corolla";
	car.yearModel = 2020;

	car.printData();
	return 0;
}