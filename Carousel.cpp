#include "Carousel.h"

Carousel::Carousel():ChildrenRide() //default constructor, info from parent 
{
	//left empty on purpose
}
Carousel::Carousel(string rideName, int maxAge):ChildrenRide(rideName, maxAge)
{
    //empty on purpose, constructor inherits from ChildrenRide
}  
void Carousel::showInfo() const        //print out all info
{
    cout << "Carousel Type" << endl;
    cout << " Name: " << getRideName() << endl;
    cout << " Info: 5 minutes on play horses." << endl;
    restrictions();          
}      
