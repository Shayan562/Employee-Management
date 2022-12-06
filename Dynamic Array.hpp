#pragma once
#include "Employees.hpp"

template <class T>
class Array{
public:
    int size;
    T *arr;
    Array(int size){
        arr= new T[size];
    }
    ~Array(){
        delete arr;
        arr=NULL;
    }
};
