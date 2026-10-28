#include <iostream>
#include <string>
#include "h2a.h"

int main() {
	Car car;

	car.brand = "Toyota";
	car.model = "Corolla";
	car.yearModel = 2021;

	car.printData();
	return 0;
}
