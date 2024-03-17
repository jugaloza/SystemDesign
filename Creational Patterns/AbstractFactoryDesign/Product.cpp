#include "Product.h"

IFurniture::IFurniture(bool legs) :m_legs(legs)
{

}

Chairs::Chairs(bool legs) : IFurniture(legs)
{

}

bool Chairs::hasLegs()
{
	return m_legs;
}

Sofa::Sofa(bool legs) : IFurniture(legs)
{

}

bool Sofa::hasLegs()
{
	return m_legs;
}

CoffeeTable::CoffeeTable(bool legs) : IFurniture(legs)
{

}

bool CoffeeTable::hasLegs()
{
	return m_legs;
}

ModernDecorFactory::ModernDecorFactory()
{

}

ArtDecorFactory::ArtDecorFactory()
{

}

IFurniture* ModernDecorFactory::getFurniture(Furniture type)
{
	if (type == Furniture::CHAIR)
	{
		return new Chairs(true);
	}
	else if (type == Furniture::SOFA)
	{
		return new Sofa(true);
	}
	else if (type == Furniture::COFFEETABLE)
	{
		return new CoffeeTable(true);
	}
	else
	{
		return nullptr;
	}
}

IFurniture* ArtDecorFactory::getFurniture(Furniture type)
{
	if (type == Furniture::CHAIR)
	{
		return new Chairs(true);
	}
	else if (type == Furniture::SOFA)
	{
		return new Sofa(true);
	}
	else if (type == Furniture::COFFEETABLE)
	{
		return new CoffeeTable(true);
	}
	else
	{
		return nullptr;
	}
}

IFurnitureFactory* Client::getFurnitureFactory(FurnitureDecor decorType)
{
	if (decorType == FurnitureDecor::ART)
	{
		return new ArtDecorFactory();
	}
	else if (decorType == FurnitureDecor::MODERN)
	{
		return new ModernDecorFactory();
	}
	else
	{
		return nullptr;
	}
}