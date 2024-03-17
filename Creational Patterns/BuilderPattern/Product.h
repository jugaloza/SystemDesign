#pragma once
#include <iostream>
#include <map>

class Product
{
private:
	std::string m_productType;
	std::string m_productName;
	bool m_productAvailability;
	std::map<std::string, int> m_nSKUS;
public:
	Product();
	void printSKUs();
	void setProductType(std::string productType);
	void setProductName(std::string productName);
	void setProductAvailability(bool productAvailability);
	void setNumberOfSKU(std::string name, int count);

	//void displaySKUs();

};

class IBuilder
{
public:

	virtual void setProductType(std::string productType) = 0;
	virtual void setProductName(std::string productName) = 0;
	virtual void setProductAvailability(bool productAvailability) = 0;
	virtual void setNumberSKUS(std::string name, int value) = 0;
	virtual Product* getProduct() = 0;
};


class ConcreteBuilder : public IBuilder
{
private:
	Product* m_product;
public:
	
	ConcreteBuilder();

	~ConcreteBuilder();
	
	void Reset();

	void setProductType(std::string productType) override;

	void setProductName(std::string productName) override;

	void setProductAvailability(bool productAvailability) override;

	void setNumberSKUS(std::string name, int value) override;

	Product* getProduct() override;
	
};