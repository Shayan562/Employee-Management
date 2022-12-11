#pragma once
#include <iostream>
#include "Nodes.hpp"
#include "Linked List.hpp"
#include "Employees.hpp"
#include "Dynamic Array.hpp"

//Hash key will always be uniques
class HashTable{
public:
    int size;
    Array<SingllyList> *table;
    float alpha;
    int elements;
    HashTable();
    int hash(int);
    void insert(Employee);
    Employee* search(int );
    void remove(int);
    void print(){//temporary
        for(int i=0;i<size;i++){
            table->arr[i].Display();
         }
    }
    void remake();
};
HashTable::HashTable(){
    elements=0;
    alpha=0.75;
    size=totalEmployees+1;
    table= new Array<SingllyList>(size);
}
int HashTable::hash(int key){
    return key%size;
}
void HashTable::insert(Employee emp){
    int index=hash(emp.getId());
    table->arr[index].insert(emp);
    int LoadFactor=++elements/size;
    if(LoadFactor>=alpha){
        remake();
    }
}
Employee* HashTable::search(int reqID){
    int index=hash(reqID);
    NodeSingllyList* curr=table->arr[index].head;
    for(;curr!=NULL;curr=curr->next){
        if(curr->emp.getId()==reqID){
            return &(curr->emp);
        }
    }
    return NULL;
}
void HashTable::remove(int reqID){
    int index=hash(reqID);
    table->arr[index].remove(reqID);
    elements--;
}
void HashTable::remake(){
    int tempSize=size*2;
    int index;
    Array<SingllyList> *temp=new Array<SingllyList>(tempSize);
    NodeSingllyList* curr;
    for(int i=0;i<size;i++){
        if(table->arr[i].head==NULL){
            continue;
        }
        for(curr=table->arr[i].head;curr!=NULL;curr=curr->next){
            index=curr->emp.getId();
            index=index%tempSize;
            temp->arr[index].insert(curr->emp);
        }
    }
    Array<SingllyList> *del=table;
    table=temp;
    size=tempSize;
    delete del;
}
