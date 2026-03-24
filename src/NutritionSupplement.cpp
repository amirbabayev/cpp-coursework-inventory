#include "NutritionSupplement.h"

NutritionSupplement::NutritionSupplement(std::string n, double p, int s, std::string b) 
    : Product(n, p, s), brand(b) {}

void NutritionSupplement::display() const {
    std::cout << "[" << getCategory() << "] " << brand << " " << name 
              << " | Price: $" << price << " | In Stock: " << stock << std::endl;
}
