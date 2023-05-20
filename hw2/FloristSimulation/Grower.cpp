#include "Grower.h"

//I never believed a class could bully a programmer, thank god he's done.

Grower::Grower(std::string name, Gardener* gardener) : Person("Grower " + name), gardener(gardener) {

}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> v) {
	std::cout << getName() << " forwards the request to " << gardener->getName() << ".\n";
	FlowersBouquet* fb = gardener->prepareBouquet(v);
	std::cout << gardener->getName() << " returns flowers to " << getName() << ".\n";

	//From now on do not use Gardener*!
	delete gardener;

	return fb;
} 