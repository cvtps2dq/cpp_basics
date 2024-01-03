//
// Created by ggkos on 1/4/2024.
//

#include <cstdlib>
#include <iostream>

// see "general/pointers.cpp"


inline void output_cpp(int* memory, size_t size){
    for(int ix = 0; ix < size; ix++){
        std::cout << "Element " << ix << ": " << memory[ix] << std::endl;
    }
}

inline void populate_cpp(int* arr, size_t size){
    for(int ix = 0; ix < size; ix++){
        std::cout << "Enter element " << ix << ": ";
        std::cin >> arr[ix];
    }
}

inline int find_max_cpp(const int* memory, size_t size){
    int max = INT_MIN;
    for(int ix = 0; ix < size; ix++){
        if (memory[ix] > max){
            max = memory[ix];
        }
    }

    return max;
}

// really unsafe! please do not do this ever again
// only for demonstration!
inline void alter_cpp(int* memory, int position, int value){
    memory[position] = value;
}

inline int cppstyle(){
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
        int* memory = new int[size];

        // we allocated memory, now we need to do something
        // with it
        populate_cpp(memory, size);
        std::cout << "Max number: " << find_max_cpp(memory, size) << std::endl;
        alter_cpp(memory, 1, 255);

        // free memory so or it will leak
        // we are using scalar delete operator from C++
        delete[] memory;
    }
}