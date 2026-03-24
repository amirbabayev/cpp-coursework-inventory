#include "Inventory.h"
#include <algorithm>
#include <iostream>

void Inventory::addProduct(std::shared_ptr<Product> p) {
    products.push_back(p);
}

void Inventory::displayAll() const {
    std::cout << "\n--- IronFuel Nutritions Inventory ---\n";
    for (const auto& p : products) {
        p->display();
    }
}

void Inventory::sortByPrice() {
    // Using std::sort algorithm
    std::sort(products.begin(), products.end(), [](const std::shared_ptr<Product>& a, const std::shared_ptr<Product>& b) {
        return a->getPrice() < b->getPrice();
    });
}

void Inventory::purchaseProduct(const std::string& name, int amount) {
    // Using std::find_if algorithm
    auto it = std::find_if(products.begin(), products.end(), [&name](const std::shared_ptr<Product>& p) {
        return p->getName() == name;
    });

    if (it != products.end()) {
        try {
            (*it)->reduceStock(amount);
            std::cout << "Transaction Success: Purchased " << amount << " units of " << name << ".\n";
        } catch (const std::runtime_error& e) {
            std::cerr << "Transaction Failed: " << e.what() << "\n";
        }
    } else {
        std::cerr << "Error: Product '" << name << "' not found.\n";
    }
}
