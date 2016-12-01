#include "TeenageRide.h"

int TeenageRide::numOfTeenageRides = 0;	//init static var to 0
TeenageRide::TeenageRide():ParkRide(),minHeight(-1)	//default constructor
{
	numOfTeenageRides++;  //increment teenrides
}
TeenageRide::TeenageRide(string rideName, int minHeight):ParkRide(rideName),minHeight(minHeight) //constructor gets info from parkride/parameters of function
{
	numOfTeenageRides++;		
}
int TeenageRide::getMinHeight() const		//access min height
{
	return minHeight;
}
void TeenageRide::restrictions() const		//get restrictions for specific ride	
{
	cout << " Rule: minimum height: " << getMinHeight() << endl;
}
int TeenageRide::getNumOfTeenageRides() //access private variable from other classes
{
    return numOfTeenageRides;
}    
