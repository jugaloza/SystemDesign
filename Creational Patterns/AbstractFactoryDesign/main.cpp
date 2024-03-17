#include "Product.h"

int main()
{
	IFurniture* chair;
	IFurniture* sofa;

	chair = Client::getFurnitureFactory(FurnitureDecor::MODERN)->getFurniture(Furniture::CHAIR);
	sofa = Client::getFurnitureFactory(FurnitureDecor::MODERN)->getFurniture(Furniture::SOFA);

	if (!chair)
	{
		std::cout << " Unable to create instance of modern decor chair";
	}
	else
	{
		std::cout << chair->hasLegs() << std::endl;
	}

	if (!sofa)
	{
		std::cout << " Unable to create instance of modern decor sofa";
	}
	else
	{
		std::cout << sofa->hasLegs() << std::endl;
	}

	std::cin.get();
	return 0;
	
}