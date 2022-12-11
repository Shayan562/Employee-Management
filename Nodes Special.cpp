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
    NodeBST(DataBST data){
        left=NULL;
        right=NULL;
        numOfEmployees=0;
        this->data=data;
    }
    void insert(Employee &emp){
        numOfEmployees++;
        list.insert(emp);
    }
};