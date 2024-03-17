#include "Prototype.h"

IProduct::~IProduct()
{

}

IProduct::IProduct(std::string productName)
{
	m_productName = productName;
}

void IProduct::Method(float price)
{
	m_productPrice = price;
	std::cout << " Method from : " << m_productName << " having price : " << m_productPrice;
}

ProductA::ProductA(std::string name, float price) : IProduct(name), m_productAPrice(price)
{

}

IProduct* ProductA::Clone()
{
	return new ProductA(*this);
}