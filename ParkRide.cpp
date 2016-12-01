#include "ParkRide.h"

int ParkRide::numOfParkRides = 0; //initialize static variable to zero
ParkRide::ParkRide()
{
	numOfParkRides++;		//Not sure ABOUT ANYTHING HERE
	rideName = "uninitialized";
	
}
ParkRide::ParkRide(string name)  //initialize park ride with name and increment # of total rides
{
	numOfParkRides++;
	rideName = name;
}
string ParkRide::getRideName() const    //make ridename accessible by children
{
	return rideName;
}
int ParkRide::getNumOfParkRides() //return number of park rides
{
	return numOfParkRides;
}
	
