#pragma once
#include "Device.h"
#include "Appliances.h"

class SoundPlayer final :  public Device, Appliances {
private:
	int _totalTracks;
public:
	SoundPlayer(int batteryLife, int totalTracks, float weight) : Device(batteryLife), _totalTracks(totalTracks), Appliances(weight){};

	void ShowSpec() override { cout << "\nКоличество треков, которые можно записать:  " << _totalTracks << "; \nДержит заряд: "<< _batteryLife << " часов" << "; \nВес: " << _weight << " кг\n\n"; }

	~SoundPlayer() = default;
};

