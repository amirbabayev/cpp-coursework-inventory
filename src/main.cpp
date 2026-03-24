#include <iostream>
#include <memory>
#include "Inventory.h"
#include "ProteinAndCreatine.h"

int main() {
    Inventory ironFuel;

    //  polymorphic objects
    ironFuel.addProduct(std::make_shared<Protein>("Gold Standard Whey", 65.99, 10, "Optimum Nutrition", 24));
    ironFuel.addProduct(std::make_shared<Protein>("Iso100", 75.50, 5, "Dymatize", 25));
    ironFuel.addProduct(std::make_shared<Creatine>("Micronized Creatine", 25.99, 20, "Optimum Nutrition", "Monohydrate"));

    // Initial Display
    ironFuel.displayAll();

    //Demonstrate Sorting 
    std::cout << "\n[Sorting inventory by price...]\n";
    ironFuel.sortByPrice();
    ironFuel.displayAll();

    //Demonstrate Purchase and Exception Handling 
    std::cout << "\n[Processing Transactions...]\n";
    ironFuel.purchaseProduct("Iso100", 2);           
    ironFuel.purchaseProduct("Micronized Creatine", 30); // Should trigger exception stock is 20

    //Demonstrate Bonus Generic Functionality
    std::cout << "\n[Filtering only Protein products (Template Method Demo)]:\n";
    auto proteins = ironFuel.getProductsByType<Protein>();
    for (const auto& p : proteins) {
        std::cout << "- " << p->getName() << " | Price: $" << p->getPrice() << "\n";
    }

    return 0;
}
