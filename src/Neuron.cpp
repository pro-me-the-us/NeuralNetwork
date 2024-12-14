#include "../include/Neuron.hpp"

	//Fast Sigmoid Function 
	//f(x) = x/1+abs(x)
	//Derivate f(x) : f(x)*(1-f(x))

//Constructor

void Neuron::setVal(double val){
	this->val = val;
	activate();
	derive();
}

Neuron :: Neuron(double val){
    this->val=val;
    activate();
    derive();
}

void Neuron :: activate() {
    this->activatedVal = this->val / (1+ abs(this->val));
}

void Neuron :: derive(){
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}
