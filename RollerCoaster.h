#include <iostream>
#include <string>
using namespace std;
#include "TeenageRide.h"    //inherit from parent class
#ifndef ROLLERCOASTER_H     //define RollerCoaster.h as header
#define ROLLERCOASTER_H
class RollerCoaster: public TeenageRide
{
	public:
		RollerCoaster();
		RollerCoaster(string, int);
		virtual void showInfo() const;
};
#endif
