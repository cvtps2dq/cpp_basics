//
// Created by ggkos on 1/4/2024.
//
#include <iostream>
inline void dereference(int &big_array){
    std::cout << "We didn't get any compile error!" << std::endl;
    std::cout << "Dereference: " << big_array << std::endl;
}
inline void reference(int* big_array){
    std::cout << "We didn't get any compile error!" << std::endl;
    std::cout << "Reference: " << big_array << std::endl;
}
inline int pointers_showcase(){
    // pointers are variables, that store addresses of other variables
    // for example

    int var = 0;    // var = 0
    int* var_addr = &var;   // this will store address of var

    // thus:
    // & - gives an address of a value
    // * - gives value of an address

    // let's demonstrate

    std::cout << "Variable value: " << var << std::endl;
    std::cout << "Variable address: " << var_addr << std::endl;
    std::cout << "Variable value by address: " << *var_addr << std::endl;

    // pointers needed for:
    // 1. dynamic allocation
    //    please see c-style-memory/cpp-style-memory
    // 2. passing big chunks of data
    //    our callstack is not that big.
    //    imagine passing something very big into tiny hole.
    //    using pointers or references, you can pass
    //    any data type, any data in functions with ease
    //    because pointers and references are single integer values
    //    that can be passed through callstack
    //    and fun fact: arrays cannot be passed in c++ / c at all :)

    // demo time!!!

    int* memory = new int[4096];
    dereference( *memory);
    reference(memory);
    delete[] memory;


}
