#pragma once
#include <vector>
#include <memory>
#include <string>
#include "Product.h"

class Inventory {
private:
    // Standard library container with smart pointers
    std::vector<std::shared_ptr<Product>> products;

public:
    void addProduct(std::shared_ptr<Product> p);
    void displayAll() const;
    void sortByPrice(); // Algorithm 1: Sort
    void purchaseProduct(const std::string& name, int amount); // Algorithm 2: Find

    // BONUS: Generic method for type-specific filtering
    template <typename T>
    std::vector<std::shared_ptr<T>> getProductsByType() const {
        std::vector<std::shared_ptr<T>> filtered;
        for (const auto& p : products) {
            if (auto casted = std::dynamic_pointer_cast<T>(p)) {
                filtered.push_back(casted);
            }
        }
        return filtered;
    }
};
