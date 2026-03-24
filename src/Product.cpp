#include "Product.h"
#include <stdexcept>

Product::Product(std::string n, double p, int s) : name(n), price(p), stock(s) {}

std::string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getStock() const { return stock; }

void Product::reduceStock(int amount) {
    if (amount > stock) {
        // Exception handling for business logic
        throw std::runtime_error("Error: Not enough stock for " + name);
    }
    stock -= amount;
}
