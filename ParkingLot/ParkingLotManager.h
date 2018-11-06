#pragma once

using namespace std;

class ParkingLot {
private:
	map<string, ParkingSpot*> parkingSpots;
	string generateID(int level, int row, int position);
public:
	ParkingLot(vector< vector< pair<int, SpotSize>>> parkingSpots);
	~ParkingLot();
	void parkVehicle(Vehicle &vehicle);
	void unparkVehicle(Vehicle &vehicle);
	bool canFitVehicle(SpotSize spotSize, VehicleSize vehicleSize);
	void printParkingSpots();
};
