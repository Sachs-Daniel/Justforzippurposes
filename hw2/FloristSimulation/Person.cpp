#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name) {

}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> v) {
	std::string joined = FlowersBouquet::join(v, ", ");
	std::cout << getName() << " orders flowers to " << p->getName() << " from " << f->getName() <<  ": " << joined.substr(0,joined.size()-2) << "." << "\n";
	f->acceptOrder(p, v);
	delete f;
}

void Person::acceptFlowers(FlowersBouquet* fb) {
	std::cout << getName() << " accepts the flowers: " << fb->to_string() << "\n";
	delete fb;
}

std::string Person::getName() {
	return name;
}