#pragma once

class Motorcycle : public Vehicle {
private:
	const VehicleSize size = VehicleSize::motorcycle;
	static int numOfVehicles;
public:
	Motorcycle() : Vehicle("M" + std::to_string(numOfVehicles)) { ++numOfVehicles; };
	Motorcycle(std::string numberPlate) : Vehicle(numberPlate) { ++numOfVehicles; };
	virtual VehicleSize getSize() const;
	virtual ~Motorcycle();
};

