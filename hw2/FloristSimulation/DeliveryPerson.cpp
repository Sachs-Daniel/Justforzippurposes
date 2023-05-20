#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Person("Delivery Person " + name) {

}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* fb) {
	std::cout << getName() << " delivers flowers " << p->getName() << ".\n";
	p->acceptFlowers(fb);
	delete p;
}
