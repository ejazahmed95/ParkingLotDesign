#pragma once

class Bus : public Vehicle {
private:
	const VehicleSize size = VehicleSize::bus;
public:
	Bus(std::string numberPlate) : Vehicle(numberPlate) {};;
	virtual VehicleSize getSize() const;
	virtual ~Bus();
};

