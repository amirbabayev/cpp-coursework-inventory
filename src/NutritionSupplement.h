#pragma once
#include "Product.h"
#include <iostream>

// Level 1 of Inheritance
class NutritionSupplement : public Product {
protected:
    std::string brand;
public:
    NutritionSupplement(std::string n, double p, int s, std::string b);
    virtual void display() const override;
};
