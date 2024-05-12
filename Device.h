#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics {
protected:
	int _batteryLife;
public:
	Device(int batteryLife) : _batteryLife(batteryLife) {};

	void ShowSpec() override { cout << "время работы аккамулятора: " << _batteryLife << " часов" << endl; }

	~Device() = default;
};

