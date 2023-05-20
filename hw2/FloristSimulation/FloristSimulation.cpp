#include <iostream>
#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "Grower.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

int main()
{
    //std::cout << "Hello World!\n";

    Person* p1 = new Person("Chris");
    std::vector<std::string> flowers;
    flowers.push_back("Roses");
    flowers.push_back("Violets");
    flowers.push_back("Gladiolus");

    p1->orderFlowers(
        new Florist("Fred", 
            new Wholesaler("Watson", new Grower("Gray", new Gardener("Garret"))),
            new FlowerArranger("Flora"),
            new DeliveryPerson("Dylan")
        ),
        new Person("Robin"),
        flowers
    );

    delete p1;
}
