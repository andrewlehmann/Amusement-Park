#include <iostream>
#include <string>
using namespace std;
#include "TeenageRide.h"       //inherit from parent class
#ifndef VIKING_H            //define viking.h as header
#define VIKING_H
class Viking: public TeenageRide
{
	public:
		Viking();
		Viking(string, int);
		virtual void showInfo() const;
};
#endif
