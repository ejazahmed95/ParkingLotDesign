#include "stdafx.h"
#include "Car.h"

int Car::numOfVehicles = 0;

VehicleSize Car::getSize() const {
	return size;
}

Car::~Car() {
}
