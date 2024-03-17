#pragma once
#include <iostream>

enum class Furniture
{
	SOFA,
	CHAIR,
	COFFEETABLE
};

enum class FurnitureDecor
{
	MODERN,
	ART
};

class IFurniture
{
protected:
	bool m_legs;
public:
	IFurniture(bool legs);
	virtual bool hasLegs() = 0;
	
};

class Chairs : public IFurniture
{
public:
	
	Chairs(bool legs);
	
	bool hasLegs() override;
	
};

class Sofa : public IFurniture
{
public:
	Sofa(bool legs);
	
	bool hasLegs() override;

};

class CoffeeTable : public IFurniture
{

public:
	
	CoffeeTable(bool legs);
	
	bool hasLegs() override;


};

class IFurnitureFactory
{
public:
	virtual IFurniture* getFurniture(Furniture type) = 0;
};

class ModernDecorFactory : public IFurnitureFactory
{
	/*
private:
	IFurniture* furniture;*/
public:
	ModernDecorFactory();
	IFurniture* getFurniture(Furniture type) override;
};

class ArtDecorFactory : public IFurnitureFactory
{
	/*
private:
	IFurniture* furniture*/
public:
	ArtDecorFactory();
	IFurniture* getFurniture(Furniture type) override;
};

class Client
{
private:
	//static IFurnitureFactory* furnitureFactory;

public:
	static IFurnitureFactory* getFurnitureFactory(FurnitureDecor type);
};