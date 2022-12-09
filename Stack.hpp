#pragma once
#include<iostream>
#include"Linked List.hpp"
using namespace std;
class Stack{
    public:
    string arr[10];
    int top;
    Stack()
    {
        top=-1;
    }
    void Push(string a)
    {
        if(top==9)
        {
            cout<<"Stack OverFlow"<<endl;
            return ;
        }
        arr[++top]=a;
    }
    string pop()
    {
        if(top==-1)
        {
            cout<<"Stack UnderFlow"<<endl;
            return "";
        }
         return arr[top--];
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
};
