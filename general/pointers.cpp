//
// Created by ggkos on 1/4/2024.
//
#include <iostream>

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


}
