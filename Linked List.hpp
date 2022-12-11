#pragma once
#include "Nodes.hpp"
// #include
class doubllylinklist
{
public:
    NodeList *head;
    NodeList *tail;

    doubllylinklist()
    {
        head = NULL;
        tail = NULL;
    }
    int search_by_ID(int id)
    { // returns the index of the node at which the id is at.
        NodeList *temp = head;
        int counter = 0;
        //                 cout<<temp->obj.getId()<<endl;
        //                 temp=temp->next;
        //                  cout<<temp->obj.getId()<<endl;
        //                 temp=temp->next;
        //                  cout<<temp->obj.getId()<<endl;
        //                 temp=temp->next;
        while (temp != NULL)
        {
            if (temp->obj.getId() == id)
            {
                return counter;
            }
            else
            {
                counter++;
                temp = temp->next;
            }
        }
        return 0;
    }

    int search_by_Name(char *a)
    { // returns the index of the node at which the name is at.
        NodeList *temp = head;
        int counter = 0;

        while (temp != NULL)
        {
            if (temp->obj.getName() == a)
            {
                return counter;
            }
            else
            {
                counter++;
                temp = temp->next;
            }
        }
        return 0;
    }

    void delete_fun(int index)
    {
        // if head node has to be deleted:

        if (index == 0)
        {

            NodeList *temp = head;
            head = head->next;
            delete temp;
        }
        int counter = 0;
        NodeList *temp = head;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        if (index == counter)
        {
            NodeList *end = head;
            NodeList *prev = NULL;
            while (end->next)
            {
                prev = end;
                end = end->next;
            }
            prev->next = NULL;

            delete end;
        }

        else
        {
            NodeList *temp = head;
            NodeList *prev = head;
            for (int i = 0; i < index; i++)
            {
                if (i == 0 && index == 1)
                {

                    head = head->next;
                    delete temp;
                }
                else
                {
                    if (i == index - 1 && temp)
                    {
                        prev->next = temp->next;
                        delete temp;
                    }
                    else
                    {
                        prev = temp;
                        if (prev == NULL) // position was greater than number of nodes in the list
                            break;
                        temp = temp->next;
                    }
                }
            }
        }
    }
    void insert(Employee &obj)
    {
        NodeList *temp = new NodeList(obj);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        NodeList *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        temp->next = NULL;
        tail = temp;
    }
    void Display()
    {
        NodeList *curr = head;
        while (curr != NULL)
        {
            curr->obj.Display();
            curr = curr->next;
        }
    }
};

class SingllyList{
public:
    NodeSingllyList *head;
    NodeSingllyList *tail;
    SingllyList();
    void insert(Employee &);
    void remove(int);
    void Display(); 
 
};
SingllyList::SingllyList(){
    head=NULL;
    tail=NULL;
}
void SingllyList::insert(Employee &emp){
    NodeSingllyList *temp=new NodeSingllyList(emp);
    if(head==NULL){
        head=temp;
        tail=head;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void SingllyList::remove(int id){
    NodeSingllyList *curr=head;
    if(head==NULL){
        return;
    }
    else if(curr->emp.getId()==id){//node to delete is head node
        NodeSingllyList *del=curr;
        head=curr->next;
        delete del;
        return;
    }
    while(curr->next->emp.getId()!=id && curr->next!=NULL){
        curr=curr->next;
    }
    if(curr==NULL){
        return;
    }
    NodeSingllyList *del=curr->next;
    curr->next=curr->next->next;
    delete del;
}

void SingllyList::Display(){
    NodeSingllyList *curr=head;
    while(curr!=NULL){
        curr->emp.Display();
        curr=curr->next;
    }
}