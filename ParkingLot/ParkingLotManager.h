#pragma once

class ParkingLot {
private:
	std::map<std::string, ParkingSpot*> parkingSpots;
	std::map<std::string, ParkingSpot*> parkedVehicles;
	std::string generateID(int level, int row, int position);
public:
	ParkingLot(std::vector< std::vector< std::pair<int, SpotSize>>> parkingSpots);
	~ParkingLot();
	void parkVehicle(Vehicle &vehicle);
	std::vector<std::string> getAdjacentSpots(std::string id, int count);
	void unparkVehicle(Vehicle &vehicle);
	bool canFitVehicle(SpotSize spotSize, VehicleSize vehicleSize);
	void printParkingSpots();
};
