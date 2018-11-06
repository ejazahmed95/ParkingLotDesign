#pragma once

class Car : public Vehicle {
private:
	VehicleSize size = VehicleSize::car;
public:
	Car(std::string numberPlate) : Vehicle(numberPlate) {};
	virtual VehicleSize getSize();
	virtual ~Car();
};

