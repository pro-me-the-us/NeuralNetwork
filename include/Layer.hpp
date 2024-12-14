#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include <iostream> 
#include "Matrix.hpp"
#include "Neuron.hpp"
using namespace std;

class Layer{
public:
	Layer(int size);
	Matrix* matrixifyVals();
	Matrix* matrixifyActivatedVals();
	Matrix* matrixifyDerivedVals();
	void setVal(int i,double v);
	vector<Neuron *> getNeurons(){
		return this->neurons;
	}
private:
	int size;

	std::vector<Neuron*> neurons;
};

#endif
