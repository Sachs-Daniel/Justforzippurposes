#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person("Flower Arranger " + name) {

}

void FlowerArranger::arrangeFlowers(FlowersBouquet* fb) {
	std::cout << getName() << " arranges flowers." << "\n";
	fb->arrange();
}