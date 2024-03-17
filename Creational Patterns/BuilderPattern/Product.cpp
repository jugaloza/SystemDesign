#include "Product.h"

Product::Product()
{

}

void Product::printSKUs()
{
	for (auto const& map : m_nSKUS)
	{
		std::cout << "Product name : " << map.first << " Number of items : " << map.second;
	}
}

ConcreteBuilder::ConcreteBuilder()
{
	this->Reset();
}

ConcreteBuilder::~ConcreteBuilder()
{
	delete m_product;
}

void ConcreteBuilder::Reset()
{
	m_product = new Product();
}

void ConcreteBuilder::setProductName(std::string name)
{
	m_product->setProductName(name);
}

void ConcreteBuilder::setProductType(std::string type)
{
	m_product->setProductType(type);
}

void ConcreteBuilder::setProductAvailability(bool isAvail)
{
	m_product->setProductAvailability(isAvail);
}

void ConcreteBuilder::setNumberSKUS(std::string name, int value)
{
	m_product->setNumberOfSKU(name, value);
}

void Product::setNumberOfSKU(std::string name, int value)
{
	m_nSKUS[name] = value;
}

void Product::setProductName(std::string name)
{
	m_productName = name;
}

void Product::setProductAvailability(bool value)
{
	m_productAvailability = value;
}

void Product::setProductType(std::string type)
{
	m_productType = type;
}

Product* ConcreteBuilder::getProduct()
{
	return m_product;
}

/*
void Product::displaySKUs()
{
	for (const auto& map : m_nSKUS)
	{
		std::cout << " Name of item : " << map.first << " Number of skus : " << map.second;
	}
}*/