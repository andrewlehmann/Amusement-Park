#include <iostream>
#include <string>
using namespace std;
#include "ChildrenRide.h" //inherit from parent function
#ifndef CAROUSEL_H
#define CAROUSEL_H        //define Carousel.h as header   
class Carousel: public ChildrenRide
{
	public:
		Carousel();
		Carousel(string, int);
		virtual void showInfo() const;
};
#endif
