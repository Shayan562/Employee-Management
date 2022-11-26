//#pragma once
#include <iostream>
using namespace std;

static int ID=0;
class node
{
    public:
    node *left;
    node *right;
    node *middle;
    string position;
    node()
    {
        left=NULL;
        right=NULL;
        middle=NULL;
        position = "";
    }
    node(string position="Cheif Executive Officer")
    {
        this->position=position;
        left=NULL;
        right=NULL;
        middle=NULL;
    }
};
class Hierarchy{
    public:
    void insert(node *head)
    {
        head->left=new node("Cheif Technological Officer");
        head->middle=new node("Managing Director");
        head->right=new node("Head of Operations");
    }
   
    
    void printHierarchy(node *head)
    {
        static int i=0;
        if(head==NULL)
        {
            return;
        }
        if(i==0)
        {
        cout<<"\t\t"<<head->position<<"\t\t"<<endl;
        i++;
        }
        else{
        cout<<head->position<<"  ";
        }
        printHierarchy(head->left);
        printHierarchy(head->middle);
        printHierarchy(head->right);
    }
};
class Date{
public:
    int date;
    int month;
    int year;
    Date(int, int, int);
};
Date::Date(int date=1, int month=1, int year=2022):date(date),month(month),year(){}

class Employee{
protected:
    string name;
    int id;
    Date dateJoined;
    int salary;
    float bonus;
    string department;
    string superior;

public:
    Employee();

    //Getter
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    Date getDate()
    {
        return dateJoined;
    }
    int getSalary()
    {
        return salary;
    }
    float getBonus()
    {
        return bonus;
    }
    string getDeparment()
    {
        return department;
    }
    string getSuperior()
    {
        return superior;
    }
    
    //Setters
    void setName(string name)
    {
        this->name=name;
    }
    void setID(int id)
    {
        this->id=id;
    }
    void setDate(Date date)
    {
        dateJoined=date;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    void setBonus(float bonus)
    {
        this->bonus=bonus;
    }
    void setDeparment(string department)
    {
        this->department=department;
    }
    void setSuperior(string superior)
    {
        this->superior=superior;
    }
    void Display()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<department<<endl;
        cout<<salary<<endl;
    }
};
Employee::Employee(){
    name="";
    id=++ID;
    salary= 35000;      //base salary
    bonus= 1.1;         //10%
    department= "Not Assigned";
    superior= "Not Assigned";
}
class list{
    public:
    Employee obj;
    list *next;
    list *prev;
    list()
    {
        next=NULL;
        prev=NULL;
    }
    list(Employee &ob)
    {
        next=NULL;
        prev=NULL;
        obj.setName(ob.getName());
        obj.setID(ob.getId());
        obj.setDate(ob.getDate());
        obj.setSalary(ob.getSalary());
        obj.setBonus(ob.getBonus());
        obj.setDeparment(ob.getDeparment());
        obj.setSuperior(ob.getSuperior());

    }
};
    class doubllylinklist{
        public:
        list *head;
        list *tail;
        doubllylinklist()
        {
            head=NULL;
            tail=NULL;
        }
        void insert(Employee &obj)
        {
            list *temp=new list(obj);
            if(head==NULL)
            {
                head=temp;
                tail=temp;
                return;
            }
            list *curr=head;
            while(curr->next!=NULL)
            {
                curr=curr->next;
            }
            curr->next=temp;
            temp->prev=curr;
            tail=temp;
        }
        void Display()
        {
            list*curr=head;
            while(curr!=NULL)
            {
                curr->obj.Display();
                curr=curr->next;
            }
        }
    };
int main()
{
    node *CEO=new node("Cheif Executive Officer");
    Hierarchy company;
    company.insert(CEO);
     company.printHierarchy(CEO);
     Employee obj;
     obj.setName("Muhammad Rehan Khan");
     obj.setID(3172);
     obj.setDeparment("CEO");
     obj.setSalary(1000000);
     obj.setBonus(2.1);
     obj.setSuperior(" ");
     doubllylinklist ob;
     ob.insert(obj);
     ob.Display();
     obj.setName("Azaan Nabi Khan");
     obj.setID(3208);
     obj.setDeparment("CTO");
     obj.setSalary(2000000);
     obj.setBonus(2.1);
     obj.setSuperior(" ");


}
