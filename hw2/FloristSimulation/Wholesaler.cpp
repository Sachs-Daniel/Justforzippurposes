#include "Wholesaler.h"

//This depressive class should be completed.

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person("Wholesaler " + name) {
	this->grower = grower;
}

FlowersBouquet* Wholesaler::prepareBouquet(std::vector<std::string> v) {
	std::cout << getName() << " forwards the request to " << grower->getName() << ".\n";
	FlowersBouquet* fb = grower->prepareOrder(v);
	std::cout << grower->getName() << " returns flowers to " << getName() << ".\n";
	
	//Do not use Grower* from now on!
	delete grower;

	return fb;
}


