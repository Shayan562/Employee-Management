#pragma once
#include "Employees.hpp"

class NodeHierarchy
{
public:
    NodeHierarchy *left;
    NodeHierarchy *right;
    NodeHierarchy *middle;
    string position;
    NodeHierarchy()
    {
        left = NULL;
        right = NULL;
        middle = NULL;
        position = "";
    }
    NodeHierarchy(string position = "Cheif Executive Officer")
    {
        this->position = position;
        left = NULL;
        right = NULL;
        middle = NULL;
    }
};

class NodeList
{
public:
    Employee obj;
    NodeList *next;
    NodeList *prev;
    NodeList()
    {
        next = NULL;
        prev = NULL;
    }
    NodeList(Employee &ob)
    {
        next = NULL;
        prev = NULL;
        obj.setName(ob.getName());
        obj.setID(ob.getId());
        obj.setDate(ob.getDate());
        obj.setSalary(ob.getSalary());
        obj.setBonus(ob.getBonus());
        obj.setDeparment(ob.getDeparment());
        obj.setAge(ob.getAge());
    }
};