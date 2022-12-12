#pragma once
#include "Linked List.hpp"
class Budget{
public:
    NodeBudget *head;
    NodeBudget *tail;
    Budget();
    void insert(int year, float budget );
    void remove(int);
    void Display(); 
    void makeBudget(){
        insert(2018,2.3);
        insert(2019,3.3);
        insert(2020,5.6);
        insert(2021,4.7);
    }
 
};
Budget::Budget(){
    head=NULL;
    tail=NULL;
    makeBudget();
}
void Budget::insert(int year, float budget ){
    NodeBudget *temp=new NodeBudget(year,budget);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void Budget::remove(int year){
    NodeBudget *curr=head;
    if(head==NULL){
        return;
    }
    if(curr->year==year){
        NodeBudget *temp=head->next;
        NodeBudget* del=head;
        head=temp;
        delete del;
        return;
    }
    while(curr->next->year!=year && curr->next!=NULL){
        curr=curr->next;
    }
    if(curr==NULL){
        return;
    }
    NodeBudget *del=curr->next;
    curr->next=curr->next->next;
    delete del;
}

void Budget::Display(){
    NodeBudget *curr=head;
    while(curr!=NULL){
        cout<<"Year: "<<curr->year<<", Budget: "<<curr->budget<<" million\n";
        curr=curr->next;
    }
}
