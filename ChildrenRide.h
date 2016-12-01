#include <iostream>
#include <string>
using namespace std;
#include "ParkRide.h"   //inherit from parent function
#ifndef CHILDRENRIDE_H   //define ChildrenRide.h as header
#define CHILDRENRIDE_H
class ChildrenRide: public ParkRide
{
	private: 
		static int numOfChildrenRides;
		int maxAge;
	public:
		ChildrenRide();
		ChildrenRide(string, int);
		static int getNumOfChildrenRides();
		int getMaxAge() const;
		virtual void restrictions() const;
		virtual void showInfo() const = 0;
};
#endif
