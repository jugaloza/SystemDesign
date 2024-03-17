#pragma once
#include <iostream>

class IProduct
{
protected:
	std::string m_productName;
	float m_productPrice;
public:
	virtual ~IProduct();
	IProduct(std::string productName);
	virtual IProduct* Clone() = 0;
	virtual void Method(float price);	
};


class ProductA : public IProduct
{
private:
	float m_productAPrice;
public:
	ProductA(std::string productName, float productPrice);
	IProduct* Clone() override;
	

};