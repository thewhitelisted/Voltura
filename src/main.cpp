#include <iostream>
#include "voltura/core.hpp"

int main(int argc, char* argv[]) {
    voltura::Core core;
    std::cout << "Welcome to Voltura version " << core.getVersion() << "!" << std::endl;
    return 0;
} 