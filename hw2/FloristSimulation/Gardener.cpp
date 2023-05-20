#include "Gardener.h"


Gardener::Gardener(std::string name) : Person("Gardener "+name) {

}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> v) {
	std::cout << getName() << " prepares flowers." << "\n";
	FlowersBouquet* fb = new FlowersBouquet(v);
	return fb;
}