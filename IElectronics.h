#pragma once
#include <iostream>
#include <string>

using namespace std;

class IElectronics {
public:
	virtual void ShowSpec() = 0;

	virtual ~IElectronics() = default;
};
