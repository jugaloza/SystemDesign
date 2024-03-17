#include <iostream>
#include "Product.h"

int main()
{
	ConcreteBuilder productBuilder;
	productBuilder.setProductName("ABC");
	productBuilder.setProductType("Leisure");
	productBuilder.setProductAvailability(true);
	productBuilder.setNumberSKUS("ABC", 15);

	Product* product = productBuilder.getProduct();

	product->printSKUs();

	std::cin.get();
}