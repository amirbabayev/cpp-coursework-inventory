cmake_minimum_required(VERSION 3.10)
project(IronFuelInventory)

# Set C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include the src directory
include_directories(src)

# Find all source files in src folder
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "src/*.h")

# Create the executable
add_executable(ironfuel_app ${SOURCES} ${HEADERS})
