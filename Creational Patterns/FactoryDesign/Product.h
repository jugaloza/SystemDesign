#pragma once
#include <iostream>

enum class Furniture
{
	SOFAS,
	CHAIRS,
	MATRESSES
};

class IFurniture
{
protected:
	std::string m_type;
	
public:
	virtual ~IFurniture();
	//virtual void displayFurniture() = 0;
	virtual void furnitureType() = 0;
};

class Sofas : public IFurniture
{

public:
	Sofas();
	//void displayFurniture() override;
	void furnitureType() override;
	~Sofas();

};

class Chairs : public IFurniture
{

public:
	Chairs();
	//void displayFurniture() override;
	void furnitureType() override;
	~Chairs();
};

class Matresses : public IFurniture
{

public:
	Matresses();
	void furnitureType() override;
	~Matresses();
};

// without using extra interface and concrete factory class 
class Factory
{
public:
	static IFurniture* createFurniture(Furniture type);
};

// with using interface
class IFactory
{
public:
	virtual IFurniture* factoryMethod() = 0;
};


class ConcreteFactoryChairs : public IFactory
{
public:
	IFurniture* factoryMethod() override;
};

class ConcreteFactorySofas : public IFactory
{
public:
	IFurniture* factoryMethod() override;
};

class ConcreteFactoryMatresses : public IFactory
{
public:
	IFurniture* factoryMethod() override;
};