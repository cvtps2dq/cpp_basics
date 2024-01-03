#include <iostream>
#include <cstdlib>
#include "c-style-memory/c-style.cpp"

int main() {
    std::cout << "C++ basics." << std::endl;

    cstyle();

    //allocating memory c++ style

    int* arr = new int[10];
    arr[0] = 0;
    arr[1] = 1;
    //etc

    //scalar delete operator to free memory
    delete []arr;


    //reference

    return 0;
}
