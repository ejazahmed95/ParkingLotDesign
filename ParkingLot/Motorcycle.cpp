#include "stdafx.h"
#include "Motorcycle.h"

int Motorcycle::numOfVehicles = 0;

VehicleSize Motorcycle::getSize() const {
	return size;
}

Motorcycle::~Motorcycle() {
}
