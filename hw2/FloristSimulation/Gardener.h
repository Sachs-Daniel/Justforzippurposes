#pragma once
#include "Person.h"

//This horrific header shall leave me alone now.

class Gardener : public Person
{
public:
	Gardener(std::string);
	FlowersBouquet* prepareBouquet(std::vector<std::string>);
};

