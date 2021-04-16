#include "Neuron.h"

Neuron::Neuron()
{
	value = 0;
	weight = 0;
	bias = 0;
}

void Neuron::setValue(double val)
{
	this->value = val;
}

void Neuron::setWeight(double wei)
{
	this->weight = wei;
}

void Neuron::setBias(double bia)
{
	this->bias = bia;
}

Neuron::~Neuron()
{
	value = 0;
	weight = 0;
	bias = 0;
}
