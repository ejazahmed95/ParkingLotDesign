#pragma once

using namespace std;

enum SpotSize { Small = 0, Compact = 1, Large = 2 };

class ParkingSpot {
private:
	SpotSize size;
	string id;
	int level;
	int row;
	int position;
	Vehicle *vehicle;
public:
	bool isOccupied;
	ParkingSpot(string id, int level, int row, int position, SpotSize size) :
		id(id), level(level), row(row), position(position), size(size) {
		isOccupied = false;
	};
	SpotSize getSize() const;
	string getSizeName() const;
	Vehicle* getVehicleReference() const;
	void parkVehicle(Vehicle* vehicle);
	void unparkVehicle();
	virtual ~ParkingSpot() {};

	friend ostream &operator<<(ostream &out, const ParkingSpot &spot);
};

ostream &operator<<(ostream &out, const ParkingSpot &spot);

