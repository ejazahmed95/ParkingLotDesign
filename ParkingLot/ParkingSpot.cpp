#include "stdafx.h"
#include "ParkingSpot.h"

SpotSize ParkingSpot::getSize() const {
	return size;
}

string ParkingSpot::getSizeName() const {
	switch (size) {
	case Small:
		return "Small";
		break;
	case Compact:
		return "Compact";
		break;
	case Large:
		return "Large";
		break;
	default:
		return "Unknown";
	}
}

Vehicle* ParkingSpot::getVehicleReference() const {
	return vehicle;
}

void ParkingSpot::parkVehicle(Vehicle * vehicle) {
	this->vehicle = vehicle;
	this->isOccupied = true;
}

void ParkingSpot::unparkVehicle() {
	this->vehicle = NULL;
	this->isOccupied = false;
}

ostream &operator<<(ostream &out, const ParkingSpot &spot) {
	string isOccupied = spot.isOccupied ? spot.vehicle->getNumberPlate() : "Unoccupied";
	out << spot.id << " | " << spot.getSizeName() << " | " << isOccupied ; 
	return out;
};