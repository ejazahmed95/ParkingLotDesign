#pragma once

enum VehicleSize { motorcycle = 0, car = 1, bus = 2 };

class Vehicle {
private:
	std::string numberPlate;
public:
	Vehicle() : numberPlate("0000") {};
	Vehicle(std::string numberPlate) : numberPlate(numberPlate) {};
	std::string getNumberPlate();
	virtual VehicleSize getSize() const = NULL;
	virtual ~Vehicle();
};

