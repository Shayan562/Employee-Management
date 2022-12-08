#pragma once
#include<iostream>
#include"Nodes.hpp"
using namespace std;
class Queue
{
    public:
    Node *front;
    Node *rear;
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void Report_Complain(string data)
    {
        Node *temp=new Node(data);
        if( rear==NULL)
        {
           
            front=temp;
            front=rear;
            return;
        }
        
        
            rear->next=temp;
            rear=temp;
        
    }
    void Resolve_Complain()
    {
        if(front==NULL)
        {
            cout<<"No Complains to Resolve"<<endl;
        }   
        else
        {
            Node *curr=front;
            Node* temp = front;
            front = front->next;
 
       
            if (front == NULL)
            rear = NULL;
 
            delete (temp);
        }
    }
    void Dispaly_complains()
    {
        cout<<"------------------COMPLAIN LOG------------------"<<endl;
        Node *curr=front;
        while(curr!=rear)
        {
            cout<<". "<<curr->data<<endl;
            curr=curr->next;
           
        }
    }
};
