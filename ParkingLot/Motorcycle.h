#pragma once

class Motorcycle : public Vehicle {
private:
	const VehicleSize size = VehicleSize::motorcycle;
public:
	Motorcycle(std::string numberPlate) : Vehicle(numberPlate) {};
	virtual VehicleSize getSize() const;
	virtual ~Motorcycle();
};

