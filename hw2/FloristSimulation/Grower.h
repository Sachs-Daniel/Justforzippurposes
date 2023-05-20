#pragma once
#include "Person.h"
#include "Gardener.h"

//This obvilion deep of hell header should be complete.

class Grower : public Person
{
private:
	Gardener* gardener;

public:
	Grower(std::string, Gardener* gardener);
	FlowersBouquet* prepareOrder(std::vector<std::string>);
};

