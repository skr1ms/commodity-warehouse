#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics {
protected:
	float _weight;
public:
	Appliances(float weight) : _weight(weight) {}

	void ShowSpec() override { cout << "Вес прибора: " << _weight << " кг" << endl; }

};