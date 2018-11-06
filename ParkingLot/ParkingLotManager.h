#pragma once

using namespace std;

class ParkingLot {
private:
	map<string, ParkingSpot*> parkingSpots;
	string generateID(int level, int row, int position);
public:
	ParkingLot(vector< vector< pair<int, SpotSize>>> parkingSpots);
	~ParkingLot();
	void printParkingSpots();
};
