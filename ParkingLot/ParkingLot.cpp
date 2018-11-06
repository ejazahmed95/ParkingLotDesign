// ParkingLot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>

using namespace std;

int main()
{
	vector<vector<pair<int, SpotSize>>> parkingSpotsData;
	string parkingDataFileName = "parkingSpots.in";
	ifstream dataFile;
	int levels, rows, numberOfSpots, type;
	pair<int, SpotSize> base_pair;
	dataFile.open(parkingDataFileName);

	if (dataFile) {
		dataFile >> levels;
		for (int i = 0; i < levels; ++i) {
			dataFile >> rows;
			vector<pair<int, SpotSize>> rowsVector;
			for (int j = 0; j < rows; ++j) {
				dataFile >> numberOfSpots >> type;
				base_pair = make_pair(numberOfSpots, SpotSize(type));
				rowsVector.push_back(base_pair);
			}
			parkingSpotsData.push_back(rowsVector);
		}
	}
	dataFile.close();

	ParkingLot myParkingLot(parkingSpotsData);

	Car *myCars = new Car[5];
	
	myParkingLot.parkVehicle(myCars[0]);
	myParkingLot.parkVehicle(myCars[1]);
	myParkingLot.parkVehicle(myCars[2]);
	
	myParkingLot.printParkingSpots();

    return 0;
}

