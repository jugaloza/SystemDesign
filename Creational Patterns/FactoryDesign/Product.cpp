#include "Product.h"

IFurniture::~IFurniture()
{
	std::cout << " interface destructor" << std::endl;
}

Sofas::Sofas()
{
	m_type = "Sofas";
}

void Sofas::furnitureType()
{
	std::cout << m_type << std::endl;
}

Sofas::~Sofas()
{
	std::cout << " Sofas destructor" << std::endl;
}

Chairs::Chairs()
{
	m_type = "Chairs";
}

void Chairs::furnitureType()
{
	std::cout << m_type << std::endl;
}

Chairs::~Chairs()
{
	std::cout << " Chairs destructor" << std::endl;
}

Matresses::Matresses()
{
	m_type = "Mattresses";
}

void Matresses::furnitureType()
{
	std::cout << m_type << std::endl;
}

Matresses::~Matresses()
{
	std::cout << " Matresses destructor " << std::endl;
}

IFurniture* Factory::createFurniture(Furniture type)
{
	if (type == Furniture::SOFAS)
	{
		return new Sofas();
	}
	else if (type == Furniture::MATRESSES)
	{
		return new Matresses();
	}
	else if (type == Furniture::CHAIRS)
	{
		return new Chairs();
	}
}

// create object using concrete factory class 
IFurniture* ConcreteFactoryChairs::factoryMethod()
{
	return new Chairs();
}

IFurniture* ConcreteFactorySofas::factoryMethod()
{
	return new Sofas();
}

IFurniture* ConcreteFactoryMatresses::factoryMethod()
{
	return new Matresses();
}