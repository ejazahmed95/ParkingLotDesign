#pragma once

using namespace std;

class Car : public Vehicle {
private:
	const VehicleSize size = VehicleSize::car;
	static int numOfVehicles;
public:
	Car() : Vehicle("C" + to_string(numOfVehicles)) { ++numOfVehicles; };
	Car(string numberPlate) : Vehicle(numberPlate) { ++numOfVehicles; };
	virtual VehicleSize getSize() const;
	virtual ~Car();
};

