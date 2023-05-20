#include "Florist.h"

//This demonic class should be completed.

Florist::Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp) : 
	Person("Florist "+name) {
	this->ws = ws;
	this->fa = fa;
	this->dp = dp;
}

void Florist::acceptOrder(Person* p, std::vector<std::string> v) {
	std::cout << getName() << " forwards request to " << ws->getName() << ".\n";
	FlowersBouquet* fb = ws->prepareBouquet(v);
	std::cout << ws->getName() << "returns flowers to " << getName() << ".\n"; //Consult Daniel about it

	//From now on do not use Wholesaler!
	delete ws;
	
	std::cout << getName() << " request flowers arrangement from " << fa->getName() << ".\n";
	fa->arrangeFlowers(fb);
	std::cout << fa->getName() << " returns arranged flowers to " << getName() << ".\n";

	//From now on do not use FlowerArranger!
	delete fa;

	std::cout << getName() << " forwards flowers to " << dp->getName() << ".\n";
	dp->deliver(p, fb);

	//From now in do not use DeliverPerson!
	delete dp;
}