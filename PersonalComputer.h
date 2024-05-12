#pragma once
#include "Device.h"
#include "Appliances.h"

class PC final : public Appliances {
private:
	string _videoСard, _processor, _ram, _coolingSystem;
	int _ramQuantity;
public:
	PC(string videoСard, string processor, string ram, string coolingSystem, int ramQuantity, float weight) : _videoСard(videoСard), _processor(processor), _ram(ram), _coolingSystem(coolingSystem), _ramQuantity(ramQuantity),
		Appliances(weight) {};

	void ShowSpec() override { cout << "\nВидеокарта: " << _videoСard << "; \nПроцессор:  " << _processor << "; \nНазвание изготовителя оперативной памяти: " << _ram << "; \nКол-во опертаивной памяти: " << _ramQuantity << " гигабайт"
	<< "; \nСистема охаждения: " << _coolingSystem << "; \nВес: " << _weight << " кг\n\n"; }

	~PC() = default;
};