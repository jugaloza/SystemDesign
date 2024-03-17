#include "Prototype.h"
#include <memory>

int main()
{
	IProduct* product = new ProductA("ABC",45);
	IProduct* sameProduct = product->Clone();
	sameProduct->Method(65);
	
	
	std::cin.get();

	delete product;
	delete sameProduct;

	// using smart Pointers

	std::unique_ptr<IProduct> product = std::make_unique<IProduct>("Bat", 46);
	std::unique_ptr<IProduct> sameProduct = std::make_unique<IProduct>(product->Clone());

	return 0;

}