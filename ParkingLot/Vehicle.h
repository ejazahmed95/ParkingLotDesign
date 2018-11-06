#pragma once

enum VehicleSize { motorcycle, car, bus };

class Vehicle {
private:
	std::string numberPlate;
public:
	Vehicle() : numberPlate("0000") {};
	Vehicle(std::string numberPlate) : numberPlate(numberPlate) {};
	std::string getNumberPlate();
	virtual VehicleSize getSize() = NULL;
	virtual ~Vehicle();
};

