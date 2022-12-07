#pragma once
#include <iostream>
// #include "Nodes.hpp"
// #include "Linked List.hpp"
#include "Employees.hpp"
#include "Dynamic Array.hpp"

class HashTable{
public:
    int size;
    Array<Employee> *table;
    HashTable();
    int hash(int);
    void insert(Employee);
    Employee search(int );
    void remove(int);
    void print(){
        for(int i=0;i<size;i++){
            cout<<table->arr[i].getId()<<" ";
        }
    }
};
HashTable::HashTable(){
    size=totalEmployees+1;
    table= new Array<Employee>(size);
    Employee temp;
    temp.setID(-1);//to represent empty space
    for(int i=0;i<size;i++){
        table->arr[i]=temp;
    }
}
int HashTable::hash(int key){
    return key%size;
}
void HashTable::insert(Employee emp){
    int index=hash(emp.getId());
    for(int i=0;i<size;i++){
        index=(index+i)%size;//to make sure linear probing stays in range
        if(table->arr[index].getId()==-1){
            table->arr[index]=emp;
            break;
        }
    }
}
Employee HashTable::search(int reqID){
    int index=hash(reqID);
    for(int i=0;i<size;i++){
        index=(index+i)%size;
        if(table->arr[index].getId()==reqID){
            return table->arr[index];
        }
    }
}
void HashTable::remove(int reqID){
    int index=hash(reqID);
    for(int i=0;i<size;i++) {
        index=(index+i)%size;
        if(table->arr[index].getId()==reqID){
            Employee temp;
            temp.setID(-1);
            table->arr[index]=temp;
            break;
        }
   }
    
}
