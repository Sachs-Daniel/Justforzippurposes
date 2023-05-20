#pragma once
#include "Person.h"
#include "Grower.h"

//The crippling depression I have developed tells me this header is done.

class Wholesaler : public Person {
protected:
	Grower* grower;
public:
	Wholesaler(std::string, Grower* grower);
	FlowersBouquet* prepareBouquet(std::vector<std::string>);
};

