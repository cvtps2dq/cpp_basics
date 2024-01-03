#include <iostream>
#include <cstdlib>
#include "c-style-memory/c-style.cpp"
#include "cpp-style-memory/cpp-style.cpp"

int main() {
    std::cout << "C++ basics." << std::endl;

    cstyle();
    cppstyle();

    return 0;
}
