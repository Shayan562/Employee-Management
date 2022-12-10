// #pragma once
#include "Iostream"
#include "Employees.hpp"
#include "Linked List.hpp"
template <class DataBST>
class NodeBST{
public:
    DataBST data;
    SingllyList list;
    NodeBST *left;
    NodeBST *right;
    int numOfEmployees;
    NodeBST(){
        left=NULL;
        right=NULL;
        numOfEmployees=0;
    }
};