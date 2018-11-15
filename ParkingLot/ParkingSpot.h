#pragma once

enum SpotSize { Small = 0, Compact = 1, Large = 2 };

class ParkingSpot {
private:
	SpotSize size;
	std::string id;
	int level;
	int row;
	int position;
	Vehicle* vehicle = nullptr;
public:
	ParkingSpot(std::string id, int level, int row, int position, SpotSize size) :
		id(id), level(level), row(row), position(position), size(size) {
	};
	SpotSize getSize() const;
	std::string getSizeName() const;
	Vehicle* getVehicleReference() const;
	std::string getID() const;
	bool isOccupied() const;
	void parkVehicle(Vehicle* vehicle);
	void unparkVehicle();
	virtual ~ParkingSpot() {};

	friend std::ostream &operator<<(std::ostream &out, const ParkingSpot &spot);
};

