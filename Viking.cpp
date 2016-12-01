#include "Viking.h"

Viking::Viking():TeenageRide()  //default constructor, inherits from teenageride
{
    //intentionally empty
}
Viking::Viking(string rideName, int minHeight):TeenageRide(rideName, minHeight)
{
    //intentionally empty, inherits from parent classes
}
void Viking::showInfo() const   //print out all info on ride
{
    cout << "Viking Ride Type" << endl;
    cout << " Name: " << getRideName() << endl;   
    cout << " Info: 10 min of swaying thrill." << endl;
    restrictions();
}        
