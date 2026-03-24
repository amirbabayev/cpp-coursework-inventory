# IronFuel Nutritions: Inventory Management System

This repository contains the C++ coursework project for the Object-Oriented Programming course. The software simulates an inventory management system for a sports nutrition store ("IronFuel Nutritions"), allowing users to track, sort, purchase, and filter products.

## 📌 Project Features & Coursework Criteria Fulfilled

This project strictly adheres to the coursework requirements:

* **Polymorphism & Inheritance:** Features at least two levels of inheritance and four separate classes. 
    * *Hierarchy:* `Product` (Base) ➔ `NutritionSupplement` (Level 1) ➔ `Protein` / `Creatine` (Level 2).
* **Separation of Files:** All classes are cleanly separated into `.h` (header) and `.cpp` (implementation) files inside the `src/` directory.
* **Containers & Algorithms:** * Uses `std::vector` with `std::shared_ptr` to store polymorphic objects.
    * Implements two algorithms: `std::sort` (sorting by price) and `std::find_if` (locating products).
* **Error Management:** Implements exception handling (`std::runtime_error`) to prevent purchasing more stock than is currently available.
* **Reasonably Useful Function:** Solves a real-world business problem (inventory tracking and transaction validation).
* ** BONUS IMPLEMENTED:** Includes a user-defined generic (template) method `getProductsByType<T>()` in the `Inventory` class to filter the inventory by specific derived class types.

## Project Structure

* `src/Product.h` / `.cpp` - Abstract base class.
* `src/NutritionSupplement.h` / `.cpp` - First level of inheritance.
* `src/ProteinAndCreatine.h` / `.cpp` - Final derived classes.
* `src/Inventory.h` / `.cpp` - Manager class handling storage and logic.
* `src/main.cpp` - Entry point demonstrating functionality.

## 🚀 How to Compile and Run

This project is cross-platform and can be built using CMake (recommended) or any C++17 compatible compiler.

### Option 1: Using CMake (Windows, macOS, Linux)
1. Create a build directory: `mkdir build && cd build`
2. Generate build files: `cmake ..`
3. Build the project: `cmake --build .`
4. Run the application:
   - **Windows:** `Debug\ironfuel_app.exe`
   - **macOS/Linux:** `./ironfuel_app`

### Option 2: Using g++ (Manual)
Run the following command in the root directory:
- **macOS/Linux:** `g++ src/*.cpp -o ironfuel_app -std=c++17 && ./ironfuel_app`
- **Windows:** `g++ src/*.cpp -o ironfuel_app.exe -std=c++17 && ironfuel_app.exe`
