#pragma once

using std::map;
using std::string;
using std::vector;
using std::pair;

class ParkingLot {
private:
	map<string, ParkingSpot*> parkingSpots;
	map<string, ParkingSpot*> parkedVehicles;
	string generateID(int level, int row, int position);
public:
	ParkingLot(vector< vector< pair<int, SpotSize>>> parkingSpots);
	~ParkingLot();
	void parkVehicle(Vehicle &vehicle);
	vector<string> getAdjacentSpots(string id, int count);
	void unparkVehicle(Vehicle &vehicle);
	bool canFitVehicle(SpotSize spotSize, VehicleSize vehicleSize);
	void printParkingSpots();
};
