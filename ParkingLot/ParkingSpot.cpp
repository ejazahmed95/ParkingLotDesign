#include "stdafx.h"
#include "ParkingSpot.h"

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
		break;
	}
}

ostream &operator<<(ostream &out, const ParkingSpot &spot) {
	string isOccupied = spot.isOccupied ? spot.vehicle->getNumberPlate() : "Unoccupied";
	out << spot.id << " | " << spot.getSizeName() << " | " << isOccupied ; 
	return out;
};