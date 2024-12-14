#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream> 
#include <math.h>
#include <vector>
using namespace std;

class Neuron{
	public :
	Neuron(double val);
	
	void setVal(double v);

	//Fast Sigmoid Function 
	//f(x) = x/1+abs(x)
	//Derivate f(x) : f(x)*(1-f(x))
	void activate();
	void derive();

	double getVal(){
		return this->val;
	}

	double getActivatedVal(){
		return this->activatedVal;
	}

	double getDerivedVal(){
		return this->derivedVal;
	}

	
	private:
	//Raw Value	
	double val;

	//Value in range 0-1
	double activatedVal;

	//Approximated Derivate of activatedVal
	double derivedVal;
};

#endif
