#include "ChildrenRide.h"

int ChildrenRide::numOfChildrenRides = 0;	//init static var to 0
ChildrenRide::ChildrenRide():ParkRide(),maxAge(-1)	//default constructor
{
	numOfChildrenRides++;		//increment child rides			
}
ChildrenRide::ChildrenRide(string rideName, int maxAge):ParkRide(rideName),maxAge(maxAge)			
{
	numOfChildrenRides++;		//get ride name from parameters						
}
int ChildrenRide::getMaxAge() const		//public way to access maxage
{
	return maxAge;
}
void ChildrenRide::restrictions() const	//get restrictions for specific ride
{
	cout << " Rule: maximum age: " << getMaxAge() << endl;
}
int ChildrenRide::getNumOfChildrenRides() //return number of children rides
{
    return numOfChildrenRides;
}    
