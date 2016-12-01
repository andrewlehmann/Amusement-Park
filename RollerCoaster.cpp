#include "RollerCoaster.h"

RollerCoaster::RollerCoaster():TeenageRide()  //default constructor, inherits from teenageride
{
    //intentionally empty
}
RollerCoaster::RollerCoaster(string rideName, int minHeight):TeenageRide(rideName, minHeight)
{
    //intentionally empty, inherits from teenageRide
}
void RollerCoaster::showInfo() const   //print out all info on ride
{
    cout << "RollerCoaster Ride Type" << endl;
    cout << " Name: " << getRideName() << endl;   
    cout << " Info: 10 min of twists, turns and drops." << endl;
    restrictions();
}        
