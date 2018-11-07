#pragma once

class Car : public Vehicle {
private:
	const VehicleSize size = VehicleSize::car;
	static int numOfVehicles;
public:
	Car() : Vehicle("C" + std::to_string(numOfVehicles)) { ++numOfVehicles; };
	Car(string numberPlate) : Vehicle(numberPlate) { ++numOfVehicles; };
	virtual VehicleSize getSize() const;
	virtual ~Car();
};

