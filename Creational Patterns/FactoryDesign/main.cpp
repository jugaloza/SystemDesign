#include "Product.h"

int main()
{
	// using static method of creating object using factory class
	IFurniture* furniture = Factory::createFurniture(Furniture::SOFAS);

	furniture->furnitureType();

	delete furniture;

	// using concrete method

	IFactory* factory = new ConcreteFactoryChairs();
	IFurniture* chairs = factory->factoryMethod();

	chairs->furnitureType();

	delete furniture;

	std::cin.get();

	return 0;
}