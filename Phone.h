#pragma once
#include "Device.h"
#include "Appliances.h"

class Phone final : public Device, Appliances {
private:
	float _screenSize;
	int _screenRefreshRate;
public:
	Phone(int batteryLife, float ScreenSize, int ScreenRefreshRate,float weight) : Device(batteryLife), _screenSize(ScreenSize), _screenRefreshRate(ScreenRefreshRate), Appliances(weight) {};

	void ShowSpec() override { cout << "\nЧастота обновления экрана: " << _screenRefreshRate << "; \nРазмер экрана телефона в дюймах" << _screenSize << "; \nДержит заряд: " << _batteryLife << " часов" << "; \nВес: " << _weight << " кг\n\n"; }

	~Phone() = default;
};
