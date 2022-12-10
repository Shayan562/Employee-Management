#pragma once
#include<iostream>
#include"Nodes.hpp"
#include <fstream>
using namespace std;
class Queue
{
    public:
    NodeQue *front;
    NodeQue *rear;
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    void Report_Complain(string data, int id)
    {
        NodeQue *temp=new NodeQue(data,id);
        ofstream fout;
        fout.open("Complains_Reported.txt",ios::app);
        fout<<"Complain: "<<temp->complaint<<" ID: "<<temp->ID<<endl;
        fout.close();
        if( rear==NULL)
        {
           
            front=temp;
            rear=front;
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
            NodeQue *curr=front;
            NodeQue* temp = front;
            front = front->next;
 
       
            if (front == NULL)
            rear = NULL;
 
            delete (temp);
        }
    }
    void Dispaly_complains()
    {
        cout<<"------------------COMPLAIN LOG------------------"<<endl;
        int i=1;
        NodeQue *curr=front;
        while(curr!=NULL)
        {
            cout<<i++<<". "<<curr->complaint<<" against \"ID: "<<curr->ID<<"\""<<endl;
            curr=curr->next;
           
        }
    }
};
