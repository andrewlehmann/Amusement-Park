#include "Train.h"

Train::Train():ChildrenRide()       //default constructor
{
    //empty on purpose
}
Train::Train(string rideName, int maxAge):ChildrenRide(rideName, maxAge)
{
    //empty on purpose, inherits contents from parent
}
void Train::showInfo() const    //print out all train info
{
   cout << "Train Type" << endl;
   cout << " Name: " << getRideName() << endl;
   cout << " Info: 5 min train ride." << endl;
   restrictions();
}            
