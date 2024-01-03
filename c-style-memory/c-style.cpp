//
// Created by ggkos on 1/4/2024.
//

#include <cstdlib>
#include <iostream>
//see "general/pointers.cpp"

void output(int* memory, int size){
    for(int ix = 0; ix < size; ix++){
        std::cout << "Element " << ix << ": " << memory[ix] << std::endl;
    }
}

void populate(int* arr, int size){
    for(int ix = 0; ix < size; ix++){
        std::cout << "Enter element " << ix << ": ";
        std::cin >> arr[ix];
    }
}

int cstyle(){
    // allocating memory c-style
    std::cout << "C-Style memory allocation." << std::endl;
    std::cout << "Enter array size" << std::endl;

    size_t size = 0;
    std::cin >> size;

    // check for valid size

    if(size <= 0){
        std::cout << "Array size must be bigger than zero." << std::endl;
        return EXIT_FAILURE;
    } else{
        // allocate memory using malloc()
        int* memory = (int*)malloc(size * sizeof (int));

        // we allocated memory, now we need to do something
        // with it


    }
}