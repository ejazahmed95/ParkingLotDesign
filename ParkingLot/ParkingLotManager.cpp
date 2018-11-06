#include "stdafx.h"
#include "ParkingLotManager.h"

ParkingLot::ParkingLot(vector<vector<pair<int, SpotSize>>> parkingSpots) {
	ParkingSpot* spot;
	string id;
	for (int level = 0; level < parkingSpots.size(); ++level) {
		for (int row = 0; row < parkingSpots[level].size(); ++row) {
			for (int position = 0; position < parkingSpots[level][row].first; ++position) {
				id = generateID(level + 1, row + 1, position + 1);
				spot = new ParkingSpot(id, level + 1, row + 1, position + 1, parkingSpots[level][row].second);
				this->parkingSpots[id] = spot;
			}
		}
	}
}


ParkingLot::~ParkingLot() {
	for (auto it = parkingSpots.begin(); it != parkingSpots.end(); it++) {
		delete (*it).second;
	}
}

string ParkingLot::generateID(int level, int row, int position) {
	string result = "";
	result += (level >= 10) ? to_string(level) : '0' + to_string(level);
	result += (row >= 10) ? to_string(row) : '0' + to_string(row);
	result += (position >= 10) ? to_string(position) : '0' + to_string(position);
	return result;
}

void ParkingLot::printParkingSpots() {
	auto it = parkingSpots.begin();
	while (it != parkingSpots.end()) {
		cout << (*(*it).second) << endl;
		it++;
	}
}