#pragma once
#include "NutritionSupplement.h"

// Level 2 of Inheritance: Specific products
class Protein : public NutritionSupplement {
private:
    int proteinPerServing;
public:
    Protein(std::string n, double p, int s, std::string b, int pps);
    void display() const override;
    std::string getCategory() const override;
};

class Creatine : public NutritionSupplement {
private:
    std::string type; 
public:
    Creatine(std::string n, double p, int s, std::string b, std::string t);
    void display() const override;
    std::string getCategory() const override;
};
