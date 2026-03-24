#include "ProteinAndCreatine.h"

// Protein implementation
Protein::Protein(std::string n, double p, int s, std::string b, int pps) 
    : NutritionSupplement(n, p, s, b), proteinPerServing(pps) {}

void Protein::display() const {
    NutritionSupplement::display();
    std::cout << "   -> Serving Info: " << proteinPerServing << "g protein per serving.\n";
}

std::string Protein::getCategory() const { return "Protein"; }

// Creatine implementation
Creatine::Creatine(std::string n, double p, int s, std::string b, std::string t)
    : NutritionSupplement(n, p, s, b), type(t) {}

void Creatine::display() const {
    NutritionSupplement::display();
    std::cout << "   -> Supplement Type: " << type << ".\n";
}

std::string Creatine::getCategory() const { return "Creatine"; }
