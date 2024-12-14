#ifndef _NEURAL_NETWORK_HPP_
#define _NEURAL_NETWORK_HPP_

#include <iostream> 
#include <algorithm>
#include "Matrix.hpp"
#include "Layer.hpp"
#include "utils/MultiplyMatrix.hpp"
using namespace std;

class NeuralNetwork{
public:
	NeuralNetwork(vector<int> topology);
	void setCurrentInput(vector<double> input);
	void feedForward();
	void backPropagation();
	void printToConsole();
	void printInputToConsole();
	void printOutputToConsole();
	void printTargetToConsole();

	void setErrors();

	void setCurrentTarget(vector<double> target){
		this->target = target;
	}

	void setNeuronValue(int indexLayer, int indexNeuron , double val){
			this->layers.at(indexLayer)->setVal(indexNeuron,val);
		
	}

	Matrix* getNeuronMatrix(int index){return this->layers.at(index)->matrixifyVals();}

	Matrix* getActivatedNeuronMatrix(int index){return this->layers.at(index)->matrixifyActivatedVals();}

Matrix* getDerivedNeuronMatrix(int index){return this->layers.at(index)->matrixifyDerivedVals();}

	Matrix* getWeightMatrix(int index){return this->weightMatrices.at(index);};

	vector<double> getErrors(){return this->errors;}

	double getTotalError(){
		return this->error;
		}

private:
	int topologySize;
	vector<int> topology;
	vector<Layer*> layers;
	vector<Matrix*> weightMatrices;
	vector<Matrix *> gradientMatrices;
	//weightMatrices are Topology size -1 ;
	vector<double> input;
	vector<double> target;
	double error; //Total Error
	vector<double> errors; //Set of Errors 
	vector<double> historicalErrors;
};

#endif
