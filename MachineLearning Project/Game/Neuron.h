#pragma once

class Neuron
{
private:
	double value;
	double weight;
	double bias;
public:
	Neuron();
	~Neuron();
	void setValue(double val);
	void setWeight(double wei);
	void setBias(double bia);
	friend class NeuralNetwork;
};

