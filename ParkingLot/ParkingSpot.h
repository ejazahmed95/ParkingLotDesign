#pragma once

using namespace std;

enum SpotSize { Small, Compact, Large };

class ParkingSpot {
private:
	SpotSize size;
	string id;
	int level;
	int row;
	int position;
	bool isOccupied;
	Vehicle *vehicle;
public:
	ParkingSpot(string id, int level, int row, int position, SpotSize size) :
		id(id), level(level), row(row), position(position), size(size) {
		isOccupied = false;
	};
	string getSizeName() const;
	virtual ~ParkingSpot() {};

	friend ostream &operator<<(ostream &out, const ParkingSpot &spot);
};

ostream &operator<<(ostream &out, const ParkingSpot &spot);

