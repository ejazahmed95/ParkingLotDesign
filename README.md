# Design of a Parking Lot
## Assumptions:
1. **Vehicles** are of 3 types: Motorcycle, Car and Bus.
2. **Parking Spots** are of 3 sizes: Small, Compact, Large.
3. A Motorcyle can be parked in any of the 3 parking spots, a car cannot be parked in a *small* parking spot and a bus can only be parked in 5 consecutive *large* parking spots.

## Features:
1. When a vehicle enters for parking, the **parking system** will return a valid parking spot if available.

## Design:
1. Vehicles:
   - Motorcycle, Car and Bus inherit from Vehicle class.
   - Each vehicle is identified by registration number(number plate).
2. Parking spots: 
   - Each level has, multiple rows of parking. Each row has a number of same size parking spots.
   - Each spot has a pointer to the parked vehicle. Empty pointer implies a free spot.