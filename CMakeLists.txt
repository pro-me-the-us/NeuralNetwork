cmake_minimum_required(VERSION 3.0)
project(NeuralNetwork)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(
	NeuralNetwork
	src/main.cpp
	src/Neuron.cpp
	src/Matrix.cpp
	src/Layer.cpp
	src/utils/MatrixToVector.cpp
	src/utils/MultiplyMatrix.cpp
	src/NeuralNetwork.cpp
)

