#include <iostream>
#include <string>
using namespace std;
#include "ChildrenRide.h"   //inherit from parent class
#ifndef TRAIN_H             //define train.h as header
#define TRAIN_H
class Train: public ChildrenRide
{
	public:
		Train();
		Train(string, int);
		virtual void showInfo() const;
};
#endif
