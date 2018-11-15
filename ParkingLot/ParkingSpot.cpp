#include "stdafx.h"
#include "ParkingSpot.h"

using namespace std;

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

string ParkingSpot::getID() const {
	return id;
}

bool ParkingSpot::isOccupied() const {
	return vehicle != nullptr;
}

void ParkingSpot::parkVehicle(Vehicle * vehicle) {
	this->vehicle = vehicle;
}

void ParkingSpot::unparkVehicle() {
	this->vehicle = nullptr;
}

ostream &operator<<(ostream &out, const ParkingSpot &spot) {
	string isOccupied = spot.isOccupied() ? spot.vehicle->getNumberPlate() : "Unoccupied";
	out << spot.id << " | " << spot.getSizeName() << " | " << isOccupied ; 
	return out;
};