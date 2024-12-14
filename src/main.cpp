#include <iostream>
#include <vector>
#include "../include/Neuron.hpp"
#include "../include/Matrix.hpp"
#include "../include/NeuralNetwork.hpp"


using namespace std;

//main file for NeuralNetwork

int main(int argc,char **argv){
	vector<int> topology;
	topology.push_back(3);
	topology.push_back(2);
	topology.push_back(3);

	vector<double> input;
	input.push_back(1.0);
	input.push_back(0.0);
	input.push_back(1.0);

	//Auto Encoder Neural Network Uses same input and target to learn how to recognise the input; 

	NeuralNetwork *nn = new NeuralNetwork(topology);
	nn->setCurrentInput(input);
	nn->setCurrentTarget(input);

	//Training Process
	for(int i=0;i<1000;i++){
		cout << "Epoch : " << i << endl;
		nn->feedForward();
		nn->setErrors();
		cout << "Total Error : " << nn->getTotalError()<< endl ;
		nn->backPropagation(); 

		cout << "===============" << endl;
		cout << "OUTPUT : " ;
		nn->printOutputToConsole();

		cout << "Target: " ;
		nn->printTargetToConsole();
		cout << "===============" << endl;
		cout << endl; 
	}

	return 0;
}

