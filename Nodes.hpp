#pragma once
#include "Employees.hpp"
#include "Linked List.hpp"

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
class NodeQue{
    public:
    string complaint;
    int ID;
    NodeQue *next;
    NodeQue(string complaint, int id)
    {
        this->complaint=complaint;
        this->ID=id;
        next=NULL;
    }
 
};
class NodeSingllyList{
public:
    Employee emp;
    NodeSingllyList *next;
    NodeSingllyList(Employee &emp){
        next=NULL;
        this->emp=emp;
    }
};
class NodeBST{
public:
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