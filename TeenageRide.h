#include <iostream>
#include <string>
#include "ParkRide.h"   //inherit from parent class
using namespace std;
#ifndef TEENAGERIDE_H   //define TeenageRide.h as header
#define TEENAGERIDE_H
class TeenageRide: public ParkRide
{
	private:
		static int numOfTeenageRides;
		int minHeight;
	public:
		TeenageRide();
		TeenageRide(string, int);
		static int getNumOfTeenageRides();
		int getMinHeight() const;
		virtual void restrictions() const;
		virtual void showInfo() const = 0;		
};
#endif

