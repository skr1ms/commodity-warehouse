#pragma once
#include "Device.h"
#include "Appliances.h"

class Laptop final : public Device, Appliances {
private:
	float _screenSize;
	int _screenRefreshRate;
	string _OS;
public:
	Laptop(int batteryLife, float ScreenSize, int ScreenRefreshRate, string OS, float weight) : Device(batteryLife), _screenSize(ScreenSize), _screenRefreshRate(ScreenRefreshRate), _OS(OS), Appliances(weight) {};

	void ShowSpec() override { cout << "\nЧастота обновления экрана: " << _screenRefreshRate << "; \nРазмер экрана телефона в дюймах" << _screenSize << "; \nДержит зарядка: " << _batteryLife << " часов" 
	<< "; \nОперационная система:" << _OS << "; \nВес: " << _weight << " кг\n\n"; }

	~Laptop() = default;
};
