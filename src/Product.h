#pragma once
#include <string>

// Abstract Base Class
class Product {
protected:
    std::string name;
    double price;
    int stock;

public:
    Product(std::string n, double p, int s);
    virtual ~Product() = default; // Virtual destructor for polymorphism

    virtual void display() const = 0; // Pure virtual function
    virtual std::string getCategory() const = 0;
    
    std::string getName() const;
    double getPrice() const;
    int getStock() const;
    void reduceStock(int amount);
};
