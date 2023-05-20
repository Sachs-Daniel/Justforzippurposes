#pragma once
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"

class Florist : public Person {
	private:
		Wholesaler* ws;
		FlowerArranger* fa;
		DeliveryPerson* dp;

	public:
		Florist(std::string, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp);
		void acceptOrder(Person*, std::vector<std::string>);
};

